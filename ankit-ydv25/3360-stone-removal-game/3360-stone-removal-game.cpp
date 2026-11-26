class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        int alice = 0;
        int bob = 0;
        int count = 10;
        int actualCount = 0;
        while(n>0)
        {
            n -= count;
            if(n>=0)
            {
                actualCount++;
            }
            count--;
        }
        if(actualCount%2==0) return false;
        return true;
    }
};