class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans;
        for(int i=0;i<indices.size();i++)
        {
            int z=i;
            for(int j=0;j<indices.size();j++)
            {
                if(z==indices[j]) 
                {
                    z=j;
                    break;
                }
            }
            ans += s[z];
        }
        return ans;
    }
};