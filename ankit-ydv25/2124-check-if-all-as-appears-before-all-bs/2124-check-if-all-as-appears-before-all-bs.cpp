class Solution {
public:
    bool checkString(string s) {
        int count = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b')
            {
                count++;
            }
            if(count>0 && s[i]=='a') return false;
        }
        return true;
    }
};