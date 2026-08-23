class Solution {
public:
    bool checkDivisibility(int n) {
        int z = n;
        long sum=0;
        long prod = 1;
        while(z!=0)
        {
            int k = z %10;
            prod = prod * k;
            sum = sum + k;
            z /=10;
        }
        if(n%(prod+sum)==0) return true;
        return false;
    }
};