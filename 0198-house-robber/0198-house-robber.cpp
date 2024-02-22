class Solution {
public:
    int rob(vector<int>& nums) {

        int rob=nums[0]; 
        int unrob=0;

        for(int i=1;i<nums.size();i++)
        {
            int newrob;
            int newunrob;
            newunrob=max(unrob,rob);
            newrob=unrob+nums[i];

            rob=newrob;
            unrob=newunrob;
        }

        return max(rob,unrob);
        
    }
};