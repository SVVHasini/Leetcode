class Solution {
public:
    int findMinimumTime(vector<int>& strength, int k) {
        int n = strength.size();
        int N = 1 << n;

        vector<long long> dp(N, LLONG_MAX);
        dp[0] = 0;

        for (int mask = 0; mask < N; mask++) {
            int cnt = __builtin_popcount(mask);
            long long x = 1 + (long long)cnt * k;

            for (int i = 0; i < n; i++) {
                if (!(mask & (1 << i))) {
                    int newMask = mask | (1 << i);
                    long long timeNeeded = (strength[i] + x - 1) / x;
                    dp[newMask] = min(dp[newMask], dp[mask] + timeNeeded);
                }
            }
        }

        return dp[N - 1];
    }
};
