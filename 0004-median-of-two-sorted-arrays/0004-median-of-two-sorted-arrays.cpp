class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {  
        int n1 = nums1.size(), n2 = nums2.size();
        int totalSize = n1 + n2;
        
        vector<int> merged;
        int i = 0, j = 0;
        
        while (i < n1 && j < n2) {
            if (nums1[i] <= nums2[j]) {
                merged.push_back(nums1[i]);
                i++;
            } else {
                merged.push_back(nums2[j]);
                j++;
            }
        }
        
        while (i < n1) {
            merged.push_back(nums1[i]);
            i++;
        }
        
        while (j < n2) {
            merged.push_back(nums2[j]);
            j++;
        }
        
        if (totalSize % 2 != 0) {
            return merged[totalSize / 2];
        } else {
            int mid1 = merged[(totalSize - 1) / 2];
            int mid2 = merged[totalSize / 2];
            return (double)(mid1 + mid2) / 2.0;
        }
    }
};
