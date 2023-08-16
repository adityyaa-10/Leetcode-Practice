class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans = 1; 
        sort(nums.begin(), nums.end()); 
        
        for (int i : nums) {
            if (i <= 0) {
                continue; 
            }
            
            if (i == ans) {
                ans++; 
            } else if (i > ans) {
                break; 
            }
        }
        
        return ans;
    }
};
