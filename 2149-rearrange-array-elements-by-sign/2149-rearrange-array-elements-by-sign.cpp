class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positiveArray;
        vector<int> negativeArray;
        vector<int> ans;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]>0)
            {
                positiveArray.push_back(nums[i]);
            }
            else
            {
                negativeArray.push_back(nums[i]);
            }
        }
        
        for(int j = 0 ; j< positiveArray.size();j++)
        {
            ans.push_back(positiveArray[j]);
            ans.push_back(negativeArray[j]);
        }
        return ans;
    }
};