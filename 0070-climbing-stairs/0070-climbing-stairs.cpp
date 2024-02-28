#include <vector>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1)
            return 1;

        vector<int> dp(n + 1, -1);

        dp[0] = 1;
        dp[1] = 1;

        return solve(n, dp);
    }

    int solve(int n, vector<int> &dp) {
        if (dp[n] != -1)
            return dp[n];

        dp[n] = solve(n - 1, dp) + solve(n - 2, dp);

        return dp[n];
    }
};
