class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        set<char> charSet;

        int strLength = s.length();
        if (strLength <= 1)
            return strLength;

        int result = 0;
        int left = 0;

        for (int right = 0; right < strLength; right++)
        {
            while (charSet.count(s[right]) > 0)
            {
                charSet.erase(s[left]);
                left++;
            }
            charSet.insert(s[right]);
            result = max(result, right - left + 1);
        }
        return result;
    }
};