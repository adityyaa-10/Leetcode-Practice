class Solution {
public:
    int pivotIndex(vector<int>& nums) {
          if(nums.size() == 0)
              return - 1;
      int left = 0, right = 0;
      for(int num : nums) 
      {
          right += num;

      }
      for(int i = 0; i < nums.size(); i ++) 
      {
        right -= nums[i];
          
        if(right == left) 
        {
            return i;
        }
          else
            left += nums[i];
      }
      return - 1;
    }
};