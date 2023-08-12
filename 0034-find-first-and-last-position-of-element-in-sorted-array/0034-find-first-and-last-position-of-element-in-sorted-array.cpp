class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();
        
        vector <int> ans(2,-1);
        int start = 0 ;
        int end = size - 1;
        
        int mid = start + (end - start)/2;
        while(start<=end){
        if(nums[mid] == target )
        {
            ans[0] = mid;
            end = mid - 1;
        }
        else if(target<nums[mid]){
            end = mid - 1;
        }
        else 
        {
            start = start +1;
        }
            mid = start + (end - start)/2;
    }
        
        // Searching last occurence
        start = 0;
        end = size - 1;
        mid = start + (end - start)/2;
           while(start<=end){
        if(nums[mid] == target )
        {
            ans[1] = mid;
            start = mid + 1;
        }
        else if(target<nums[mid]){
            end = mid - 1;
        }
        else 
        {
            start = start +1;
        }
            mid = start + (end - start)/2;
    }
        
        return ans;
    }
};