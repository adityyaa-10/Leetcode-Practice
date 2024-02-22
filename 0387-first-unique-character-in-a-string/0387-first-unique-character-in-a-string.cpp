class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        
        for(int i = 0; i < s.length(); i++) {
            char key = s[i];
            mp[key]++;
        }
        
        for(int i = 0; i < s.length(); i++) {
            char key = s[i];
            if(mp[key] == 1) {
                return i;
            }
        }        
        return -1;
    }
};
