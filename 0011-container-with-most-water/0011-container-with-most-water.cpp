class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = 0, left = 0, right = height.size()-1;
            int area;
        while(left<right)
        {
            area = (right - left)*min(height[left], height[right]); 
            result = max(result, area);
            
            if(height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;    
            }
        }
        return result;
        
    }
};