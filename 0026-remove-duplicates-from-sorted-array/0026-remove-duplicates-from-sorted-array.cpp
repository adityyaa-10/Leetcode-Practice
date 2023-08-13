class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int initialSize = nums.size();
        
        set<int>s={nums.begin(),nums.end()};
        nums.clear();
        
        for(auto i:s){
        nums.push_back(i);
        }
        
        int finalSize = nums.size();
        
        for(int i=initialSize ; i <= finalSize ; i++){
        nums.push_back(',');
     }
     
     return finalSize;
     
        
    }
};