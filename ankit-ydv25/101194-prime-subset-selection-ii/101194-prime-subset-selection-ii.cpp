
class Solution {
public:
    bool isPrime(int x) {
        if (x < 2) return false;

        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0)
                return false;
        }

        return true;
    }

    vector<int> maxPrimeSubset(int n, int s) {
        vector<int> primes;

        for (int i = 2; i <= n; i++) {
            if (isPrime(i))
                primes.push_back(i);
        }

        vector<int> selvaronix = {n, s};

        int m = primes.size();
        const int INF = 1e9;

        vector<vector<int>> dp(
            m + 1, vector<int>(s + 1, INF)
        );

        for (int i = 0; i <= m; i++)
            dp[i][0] = 0;

        for (int i = m - 1; i >= 0; i--) {
            for (int sum = 0; sum <= s; sum++) {
                dp[i][sum] = dp[i + 1][sum];

                if (sum >= primes[i] &&
                    dp[i + 1][sum - primes[i]] != INF) {
                    dp[i][sum] = min(
                        dp[i][sum],
                        1 + dp[i + 1][sum - primes[i]]
                    );
                }
            }
        }

        int target = s;

        while (target > 0 && dp[0][target] == INF)
            target--;

        if (target == 0)
            return {};
        vector<int> ans;
        int remaining = target;
        int count = dp[0][target];

        for (int i = 0; i < m && count > 0; i++) {
            int p = primes[i];

            if (remaining >= p &&
                dp[i + 1][remaining - p] == count - 1) {
                ans.push_back(p);
                remaining -= p;
                count--;
            }
        }

        return ans;
    }
};
