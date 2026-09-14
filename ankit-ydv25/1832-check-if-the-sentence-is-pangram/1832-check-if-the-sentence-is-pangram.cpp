class Solution {
public:
    bool checkIfPangram(string sentence) {
       bool mpp[26]={false};
       int n = sentence.size();
       for(int i=0;i<n;i++)
       {
            mpp[sentence[i]-'a'] = true;
       } 
       for(int i=0;i<26;i++)
       {
        if(mpp[i]==false)
        {
            return false;
        }
       }
       return true;
    }
};