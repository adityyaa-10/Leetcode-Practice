class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int tempCount = 0, maxCount = 0; 

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                tempCount++; 
            } else {
                maxCount = max(maxCount, tempCount);
                tempCount = 0;
            }
        }
        maxCount = max(maxCount, tempCount);
        return maxCount;
    }
};
