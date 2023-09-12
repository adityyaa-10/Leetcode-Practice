class Solution {
public:
    bool checkString(string s) {
       
//         string ba = "ba";
        
//        bool isFound = s.find(ba) != string::npos;
        
//         if(isFound)
//             return false;
//         return true;
        
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i]=='b' && s[i+1] == 'a')
                return false;
        }
        return true;
    }
};