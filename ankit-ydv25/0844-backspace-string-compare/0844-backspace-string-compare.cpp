class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '#')
            {
                if(ans.size()==0) continue;
                ans.pop_back();
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        string ans2="";
        for(int i=0;i<t.size();i++)
        {
            if(t[i] == '#')
            {
                if(ans2.size()==0) continue;
                ans2.pop_back();
            }
            else{
                ans2.push_back(t[i]);
            }
        }
        if(ans.size()!=ans2.size())
        {
            return false;
        }
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]!=ans2[i]) return false;
        }
        return true;
    }
};