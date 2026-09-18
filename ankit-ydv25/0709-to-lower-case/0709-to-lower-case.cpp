class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++)
        {
            if((int)s[i]<96)
            {
                s[i] = tolower(s[i]);
            }
        }
        return s;
    }
};