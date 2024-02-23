#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int result = 0; 
        
        int currentAltitude = 0; 
        
        for (int i = 0; i < gain.size(); i++) {
            currentAltitude += gain[i];
            
            result = max(result, currentAltitude);
        }
        
        return result;
    }
};
