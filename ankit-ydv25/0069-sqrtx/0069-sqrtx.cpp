class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int sqt;
        for(long long i=1;i*i<=x;i++)
        {
            sqt = i;
        }
        return sqt;
    }
};