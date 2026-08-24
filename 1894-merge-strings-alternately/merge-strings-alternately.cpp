class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int p=word1.size();
        int q = word2.size();
        string word;
        int j=0,z=0;
        while(j<p && z<q)
        {
            word += word1[j++];
            word += word2[z++];
        }
        while(j<p)
        {
            word += word1[j++];
        }
        while(z<q)
        {
            word += word2[z++];
        }
        return word;
    }
};