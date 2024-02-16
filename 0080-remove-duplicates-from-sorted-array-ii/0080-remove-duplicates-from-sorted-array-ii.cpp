class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        if(size <= 2 )
        {
            return size;
        }
        int i = 2;
        for(int j = 2 ; j<size ; j++ )
        {
            if(nums[j] != nums[i-2])
            {
                nums[i] = nums[j];
                i++;
            }
            
        }
        return i;
    }
};