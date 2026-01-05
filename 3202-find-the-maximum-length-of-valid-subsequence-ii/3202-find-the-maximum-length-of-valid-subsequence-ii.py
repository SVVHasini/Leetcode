class Solution:
    def maximumLength(self, nums: List[int], k: int) -> int:
        
        m=0
        dp=[[0]*k for _ in range(k)]
        for i in nums:
            c=i%k
            for j in range(k):
                dp[j][c]=dp[c][j]+1
                m=max(m,dp[j][c])
        
        return m