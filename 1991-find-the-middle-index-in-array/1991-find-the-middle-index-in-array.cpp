class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
      int left = 0, right = 0;
      for(int i = 0; i < nums.size(); i ++) 
      {
          right += nums[i];

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