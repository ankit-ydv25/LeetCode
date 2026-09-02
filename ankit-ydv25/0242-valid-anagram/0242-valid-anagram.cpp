class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int hash1[50001] ={0};
        for(int i =0;i<s.size();i++)
        {
            hash1[s[i]-'a'] +=1;
        }
        int hash2[50001] ={0};
        for(int i =0;i<t.size();i++)
        {
            hash2[t[i]-'a'] +=1;
        } 
        for(int i=0;i<26;i++)
        {
            if(hash1[i]!=hash2[i])
            {
                return false;
            }
        }
        return true;
    }
};