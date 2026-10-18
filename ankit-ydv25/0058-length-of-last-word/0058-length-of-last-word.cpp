class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int lastCount = 0;
        for(int i = s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ') break;
            else count++;
        }
        for(int i=0;i<s.size()-count;i++)
        {
            if(s[i]!=' ') lastCount++;
            else 
            {
                lastCount = 0;
            }
        }
        return lastCount;
    }
};