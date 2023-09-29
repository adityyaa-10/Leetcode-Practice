class Solution {
public:
    int CountPairs(vector<long long>& nums, int start, int mid, int end) {
        int count = 0;
        int j = mid + 1;

        for (int i = start; i <= mid; i++) {
            while (j <= end && nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }

        return count;
    }

    int mergeSort(vector<long long>& nums, int start, int end) {
        if (start >= end) {
            return 0;
        }

        int mid = start + (end - start) / 2;
        int ans = 0;

        ans += mergeSort(nums, start, mid);
        ans += mergeSort(nums, mid + 1, end);
        ans += CountPairs(nums, start, mid, end);
        merge(nums, start, mid, end);

        return ans;
    }

    void merge(vector<long long>& nums, int start, int mid, int end) {
        int len1 = mid - start + 1;
        int len2 = end - mid;

        vector<long long> first(len1);
        vector<long long> second(len2);

        for (int i = 0; i < len1; i++) {
            first[i] = nums[start + i];
        }

        for (int i = 0; i < len2; i++) {
            second[i] = nums[mid + 1 + i];
        }

        int index1 = 0, index2 = 0;
        int mainArrayIndex = start;

        while (index1 < len1 && index2 < len2) {
            if (first[index1] <= second[index2]) {
                nums[mainArrayIndex++] = first[index1++];
            } else {
                nums[mainArrayIndex++] = second[index2++];
            }
        }

        while (index1 < len1) {
            nums[mainArrayIndex++] = first[index1++];
        }

        while (index2 < len2) {
            nums[mainArrayIndex++] = second[index2++];
        }
    }

    int reversePairs(vector<int>& nums) {
        // Copy the original array to a long long array
        vector<long long> nums_copy(nums.begin(), nums.end()); 
        int result = mergeSort(nums_copy, 0, nums_copy.size() - 1);
        return result;
    }
};
