class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int prefixSum = 0;
        int minValue = INT_MAX;

        for (int num : nums) {
            prefixSum += num;
            minValue = min(minValue, prefixSum);
        }

        return max(1, 1 - minValue);
    }
};
