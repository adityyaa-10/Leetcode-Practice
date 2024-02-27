class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        
        int index = 0;        
        solve(index, nums, curr, ans);
        return ans;
    }
    
    void solve(int index, vector<int> &nums, vector<int>curr, vector<vector<int>>&ans)
    {
        // BASE CASE
        if(index == nums.size())
        {
            ans.push_back(curr);
            return;
        }
        
        // IN CASE OF NOT PICK
        solve(index+1, nums, curr, ans);
        
        // IN CASE OF PICK
        curr.push_back(nums[index]);
        solve(index+1, nums, curr, ans);
    }
};