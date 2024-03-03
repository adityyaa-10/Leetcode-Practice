class Solution
{
private:
    void solve(int i, int n, vector<int> &sub, vector<vector<int>> &ans, vector<int> &nums)
    {
        // Base Condition
        if (i >= n)
        {
            ans.push_back(sub);
            return;
        }

        // Pick case
        sub.push_back(nums[i]);
        solve(i + 1, n, sub, ans, nums);

        // Not pick
        sub.pop_back();
        solve(i + 1, n, sub, ans, nums);
    }

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> sub;
        solve(0, nums.size(), sub, ans, nums);

        return ans;
    }
};