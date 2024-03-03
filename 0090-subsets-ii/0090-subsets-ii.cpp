class Solution
{
private:
    void solve(int ind, vector<int> &nums, vector<int> &sub, vector<vector<int>> &ans)
    {
        ans.push_back(sub);
        for (int i = ind; i < nums.size(); i++)
        {
            if (i > ind && nums[i] == nums[i - 1])
            {
                continue;
            }

            sub.push_back(nums[i]);
            solve(i + 1, nums, sub, ans);
            sub.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> sub;
        sort(nums.begin(), nums.end());

        solve(0, nums, sub, ans);
        return ans;
    }
};