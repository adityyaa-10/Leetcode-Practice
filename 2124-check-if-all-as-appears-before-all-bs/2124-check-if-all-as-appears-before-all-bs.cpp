class Solution {
public:
    bool checkString(string s) {
       
        string ba = "ba";
        
       bool isFound = s.find(ba) != string::npos;
        
        if(isFound)
            return false;
        return true;
    }
};