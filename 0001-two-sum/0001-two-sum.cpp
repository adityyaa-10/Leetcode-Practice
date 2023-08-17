class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> v;
        int size = nums.size() - 1;
            for (int i = 0; i<=size; i++)
            {
                for(int j =i+1; j<=size; j++)
                {
                    if(nums[i]+nums[j] == target)
                    {
                        v.push_back(i);
                        v.push_back(j);
                        return v;
                    }
                }
            }
        return v;
    }
};