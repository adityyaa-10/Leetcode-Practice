// Recursive Code
/*class Solution {
private:
    int solve(int ind, vector<int>& nums) {
        if (ind == 0)
            return nums[ind];
        if (ind < 0)
            return 0;

        int pick = nums[ind] + solve(ind - 2, nums);
        int notPick = 0 + solve(ind - 1, nums);

        return max(pick, notPick);
    }

public:
    int rob(vector<int>& nums) {
        int ind = nums.size() - 1;
        return solve(ind, nums);
    }
};
Time Complexity = O(2 ^ n)
Space Complexity = O(n) { Recursion Stack space }*/

// Memoisation Code
/*class Solution {
private:
    int solve(int ind, vector<int>& nums, vector<int>& dp) {
        if (ind == 0)
            return nums[ind];
        if (ind < 0)
            return 0;

        if (dp[ind] != -1)
            return dp[ind];

        int pick = nums[ind] + solve(ind - 2, nums, dp);
        int notPick = 0 + solve(ind - 1, nums, dp);

        return dp[ind] = max(pick, notPick);
    }

public:
    int rob(vector<int>& nums) {
        int ind = nums.size() - 1;
        vector<int> dp(nums.size(), -1);
        return solve(ind, nums, dp);
    }
};*/

// Tabulation Code
/*class Solution {
public:
    int rob(vector<int> nums) {
        vector<int> dp(nums.size());
        dp[0] = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int pick = nums[i];
            if (i > 1) {
                pick += dp[i - 2];
            }
            int notPick = dp[i-1];
            dp[i] = max(pick, notPick);
        }
        return dp[nums.size()-1];
    }
};
Time Complexity = O(n)
Space Complexity = O(n)
*/

// Tabulation Space Optimised Code
class Solution {
public:
    int rob(vector<int> nums) {
        int rob = nums[0];
        int notRob = 0;

        for (int i = 1; i < nums.size(); i++) {
            int newRob = notRob + nums[i];
            int newNotRob = max(rob, notRob);

            rob = newRob;
            notRob = newNotRob;
        }
        return max(rob, notRob);
    }
};