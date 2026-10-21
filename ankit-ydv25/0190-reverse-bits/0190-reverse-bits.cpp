class Solution {
public:
    int reverseBits(int n) {
        vector<int> ans;
        while(n>1)
        {
            ans.push_back(n%2);
            n /=2;
        } 
        ans.push_back(n);
        int p = ans.size();
        if(p<32)
        {
            for(int i=0;i<32-p;i++)
            {
                ans.push_back(0);
            }
        }
        reverse(ans.begin(),ans.end());
        long long realAns=0;
        for(int i=0;i<ans.size();i++)
        {
            realAns += ans[i]*pow(2,i);
        }
        return realAns;
    }
};