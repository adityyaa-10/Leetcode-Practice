class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {  
       vector <int> v;
        for(int i: nums1)
        {
            v.push_back(i);
        }
        
        for(int j: nums2)
        {
            v.push_back(j);
        }
        
    std::sort(v.begin(), v.end());
               
        int x = v.size();
        if(x%2 != 0)
        {
            return double (v[x/2]);
        }
        else
        {
            return double (v[x/2 - 1] + v[x/2])/2; 
        }
        return 0;
    }
};