class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1;
        vector<int> ans;
        
        for (int i : nums) {
            if (i == count) {
                ++count;
            } else if (i > count) {
                while (count < i) {
                    ans.push_back(count);
                    ++count;
                }
                ++count;  
            }
        }
        
        while (count <= nums.size()) {
            ans.push_back(count);
            ++count;
        }
        
        return ans;
    }
};





