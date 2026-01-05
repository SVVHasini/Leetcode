class Solution {
public:
    vector<int>dp;
    int climbStairs(int n) {
        dp.assign(n+1,-1);
        return Help(n);
    }
    int Help(int n)
    {
        if(n==0||n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=Help(n-1)+Help(n-2);
    }
};