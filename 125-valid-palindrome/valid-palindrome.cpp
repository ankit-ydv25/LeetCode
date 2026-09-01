class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned ="";
        for(char c : s)
        {
            if(isalnum(c))
            {
                cleaned +=tolower(c);
            }
        }
        int end = cleaned.size() - 1 ;
        int start = 0;
        while(start<end)
        {
            if(cleaned[start]==cleaned[end])
            {
                start++;end--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};