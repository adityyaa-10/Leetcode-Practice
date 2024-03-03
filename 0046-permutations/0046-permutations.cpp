class Solution {
    private:
    void solve(vector<int>&nums, vector<int>&sub, vector<vector<int>>&ans, vector<int>&freq){
        if(sub.size()==nums.size())
        {
            ans.push_back(sub);
            return;
        }
        
        for(int i = 0; i<nums.size(); i++)
        {
            if(!freq[i]){
                sub.push_back(nums[i]);
                freq[i]=1;
                solve(nums,sub,ans,freq);
                freq[i]=0;
                sub.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>sub;
        vector<int> freq(nums.size(), 0);
        
        solve(nums,sub,ans,freq);
        return ans;
    }
};