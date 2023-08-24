class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> ans;
        int size = nums.size() - 1;
        for(int i = 0; i<=size ; i++)
        {
            ans.push_back(nums[i]);
        }
                for(int i = 0; i<=size ; i++)
        {
            ans.push_back(nums[i]);
        }
        return ans;
    }
};