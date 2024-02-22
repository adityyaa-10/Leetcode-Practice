class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> mp;
        
        int size = nums.size();
        int ans;
        for(int i = 0; i<size; i++)
        {
            mp[nums[i]]++;
        }
        for(auto itr : mp)
        {
            if(itr.second> size/2)
                ans = itr.first;
        }
        return ans;
    }
};