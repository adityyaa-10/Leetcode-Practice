class Solution
{
private:
    void solve(int ind, int n, int target, vector<int> &sub, vector<vector<int>> &ans, vector<int> &candidates)
    {
        if (target == 0)
        {
            ans.push_back(sub);
            return;
        }

        for (int i = ind; i < n; i++)
        {
            if (i > ind && candidates[i] == candidates[i - 1])
                continue; // Don't make recursive calls for repeated numbers in same level
            if (candidates[i] > target)
                break; // Stop making recursive calls if sum exceeds target

            sub.push_back(candidates[i]);
            solve(i + 1, n, target - candidates[i], sub, ans, candidates);
            sub.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> sub;

        solve(0, candidates.size(), target, sub, ans, candidates);
        return ans;
    }
};