class Solution {
public:
    int countDigitOne(int n) {
        long long ans = 0;

        for (long long i = 1; i <= n; i *= 10) {
            
            long long x = n / i;
            long long y = n % i;

            if (x % 10 == 0) {
                ans += (x / 10) * i;
            }
            else if (x % 10 == 1) {
                ans += (x / 10) * i + y + 1;
            }
            else {
                ans += ((x / 10) + 1) * i;
            }
        }

        return ans;
    }
};