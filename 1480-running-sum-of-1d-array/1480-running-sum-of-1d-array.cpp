class Solution {
public:
   vector<int> runningSum(vector<int>& nums) {
       long long size = nums.size();

       for(long long i = 1 ; i< nums.size(); i++)
       {
           nums[i]= nums[i]+nums[i-1];
       }
       return nums;
}
};