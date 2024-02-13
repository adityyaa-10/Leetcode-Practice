class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        string ans = "";
        
        for(string s : words)
        {
            if (isPalindrome(s)){
                ans = s;
                break;
            }
        }
        return ans;
        
    }
    
    bool isPalindrome(string str)
    {
        int left = 0, right = str.length()-1;
        while(left<right)
        {
            if(str[left] == str[right])
            {
                left++;
                right--;
            }
            else{
                break;
            }
        }
        if(left>=right)
            return true;
        
        return false;
    }
    
};