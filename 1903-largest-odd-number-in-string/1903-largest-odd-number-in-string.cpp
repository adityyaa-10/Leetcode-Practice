class Solution {
public:
    string largestOddNumber(string num) {
        int s = 0;
        long long int e = num.length() - 1;

        for (long long int i = e; i >= s; i--) {
            if (num[i] % 2 != 0)
                return num.substr(0, i + 1); 
            else
                num.pop_back();
        }

        return ""; 
    }
};
