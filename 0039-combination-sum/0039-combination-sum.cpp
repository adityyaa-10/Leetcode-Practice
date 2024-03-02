class Solution
{
public:
    void solve(int i, vector<int> &candidates, vector<vector<int>> &ans, vector<int> &sub, int target)
    {
        // Base case
        if (i >= candidates.size())
        {
            if (target == 0)
                ans.push_back(sub);
            return;
        }

        // PICK
        if (candidates[i] <= target)
        {
            sub.push_back(candidates[i]);
            solve(i, candidates, ans, sub, target - candidates[i]);
            sub.pop_back();
        }

        // Not Pick
        solve(i + 1, candidates, ans, sub, target);
    }

public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> sub;
        solve(0, candidates, ans, sub, target);

        return ans;
    }
};