class Solution {
public:
    int calculateScore(int a, int b) {
        vector<int> a1;
        vector<int> b1;
        while(a!=0)
        {
            a1.push_back(a%2);
            a /= 2;
        }
        while(b!=0)
        {
            b1.push_back(b%2);
            b /=2;
        }
        reverse(a1.begin(),a1.end());
        reverse(b1.begin(),b1.end());
        int s1=0;
        int s2=0;
        for(int i=0; i<a1.size();i++)
        {
            if(a1[i]==1) s1++;
        }
        for(int i=0; i<b1.size();i++)
        {
            if(b1[i]==1) s2++;
        }
        if(s1 >= s2) return s1*s2;
        return s2/s1;
    }
};