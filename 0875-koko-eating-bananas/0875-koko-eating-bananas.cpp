class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1, end = INT_MIN, ans;
        double sum;
        
        for(int i=0 ; i<piles.size() ; i++)
            end = max(end , piles[i]);
        
        while(start<=end)
        {
            sum=0;
            int mid = start + (end - start)/2;
            for(int i=0 ; i < piles.size() ; i++)
            {
                sum += ceil((double)piles[i]/mid);
            }

            if( sum <= h)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};