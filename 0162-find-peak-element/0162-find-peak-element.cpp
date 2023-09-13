class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       
        int end = nums.size() - 1 ;
        if (end == 0)
        {
            return 0;
        }
        else if (nums[end] > nums[end - 1])
            return end;
        else if (nums[0] > nums[1])
            return 0;
        for(int i = 1; i<= end ; i++)
        {
            if(nums[i]>nums[i+1] && nums[i]>nums[i-1])
            {
                return i;
            }
        }

    return 0;
    }
};