// Recursive Solution
/*class Solution {
public:
    int solve(int ind, vector<int>& cost) {
        // Base Case
        if (ind == 0)
            return cost[0];
        if (ind == 1)
            return cost[1];

        int left = solve(ind - 1, cost) + cost[ind];
        int right = solve(ind - 2, cost) + cost[ind];
        int ans = min(left, right);
        return ans;
    }

public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size() - 1;
        int outer = solve(n, cost);
        int inner = solve(n - 1, cost);

        return min(outer, inner);
    }
};*/

// Memoisation code
/*class Solution {
public:

    int solve(int ind, vector<int>& cost, vector<int> &dp)
    {
        // Base Case
         if (ind == 0)
            return cost[0];
        if (ind == 1)
            return cost[1];

        // Check for pre calculations
        if(dp[ind] != -1 )
            return dp[ind];

        dp[ind] = cost[ind] + min(solve(ind - 1, cost, dp), solve(ind-2, cost,
dp)); return dp[ind];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n, -1);

        int ans = min(solve(n-1, cost, dp), solve(n-2, cost, dp));
        return ans;
    }
};*/

// Tabulation code

/*class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n);
        dp[0] = cost[0];
        dp[1] = cost[1];

        for(int ind = 2; ind<n; ind++)
        {
            dp[ind] = cost[ind] + min(dp[ind-1], dp[ind-2]);
        }
        return min(dp[n-1], dp[n-2]);
    }
};*/

// Tabulation with space optimised code
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int prev2 = cost[0];
        int prev = cost[1];

        for (int ind = 2; ind < n; ind++) {
            int curr = cost[ind] + min(prev2, prev);
            prev2 = prev;
            prev = curr;
        }
        return min(prev2, prev);
    }
};