class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        while(n>=5)
        {
            int k=n/5;
            count = count + k;
            n /=5;
        }
        return count;
    }
};