class Solution {
public:
    bool isPalindrome(string s) {
       string newString = "";
    for (char c : s) {
        if (isalnum(c)) {
            newString += tolower(c);
        }
    }
    
    int left = 0;
    int right = newString.length() - 1;
    
    while (left < right) {
        if (newString[left] != newString[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
    }
};
