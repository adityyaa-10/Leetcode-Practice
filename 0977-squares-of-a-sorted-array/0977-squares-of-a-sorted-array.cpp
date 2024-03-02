class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> ans(size);
        for (int i = 0; i < size; i++)
        {
            nums[i] *= nums[i];
        }

        int left = 0, right = size - 1;
        for (int i = size - 1; i >= 0; i--)
        {
            if (nums[left] > nums[right])
            {
                ans[i] = nums[left];
                left++;
            }
            else
            {
                ans[i] = nums[right];
                right--;
            }
        }
        return ans;
    }
};