class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {  
        for (int i : nums2)
        {
            nums1.push_back(i);
        }
        
    std::sort(nums1.begin(), nums1.end());
               
        int x = nums1.size();
        if(x%2 != 0)
        {
            return double (nums1[x/2]);
        }
        else
        {
            return double (nums1[x/2 - 1] + nums1[x/2])/2; 
        }
        return 0;
    }
};