class Solution {
public:
    int minBitFlips(int start, int goal) {
       int count  = 0;
        while(start != 0 || goal != 0)
        {
            int x = start & 1;
            int y = goal & 1; 
            if(x != y)
                count++;
            
            start >>= 1;
            goal >>= 1;
        }
        return count;
    }
};
