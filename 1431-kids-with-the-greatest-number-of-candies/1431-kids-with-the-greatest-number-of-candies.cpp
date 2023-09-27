class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxElement = 0;
        vector <bool> ans(candies.size());
        for (int i = 0 ; i< candies.size() ; i++)
        {
            if(candies[i] > maxElement){
                maxElement  = candies[i];
            }
        }
        
        for(int i = 0 ; i < candies.size() ; i++)
        {
            if(candies[i]+extraCandies >= maxElement){
                ans[i]=true;
            }
            else{
                ans[i]=false;
            }
        }
        return ans;
        
    }
};