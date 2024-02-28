class Solution {
public:
    int rob(vector<int>& nums) {
        
        if(nums.size()==1)
            return nums[0];
        
        int max1=0, max2=0;
        
        int rob=nums[0], notRob=0;
        
        for(int i = 1; i<nums.size()-1; i++)
        {
            int newRob = notRob + nums[i];
            int newNotRob = max(rob, notRob);
            
            rob = newRob;
            notRob = newNotRob;
        }
        
        max1 = max(rob, notRob);
        
        rob=nums[1];
        notRob=0;
        
        for(int i = 2; i<nums.size(); i++)
        {
            int newRob = notRob + nums[i];
            int newNotRob = max(rob, notRob);
            
            rob = newRob;
            notRob = newNotRob;
        }
        
        max2 = max(rob, notRob);
        
        return max(max1, max2);        
    }
};