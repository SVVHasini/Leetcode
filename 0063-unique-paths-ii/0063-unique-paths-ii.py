class Solution:
    def uniquePathsWithObstacles(self, og: List[List[int]]) -> int:
        n=len(og[0])
        m=len(og)
        if og[0][0] == 1 or og[m-1][n-1] == 1:
            return 0
        dp = [[0]*n for _ in range(m)]
        dp[0][0] = 1 
        for i in range(1,n):
            if og[0][i]==0:
                dp[0][i]=dp[0][i-1]
        for i in range(1,m):
            if og[i][0]==0:
                dp[i][0]=dp[i-1][0]
        for i in range(1,m):
            for j in range(1,n):
                if og[i][j]!=1:
                    dp[i][j]=dp[i-1][j]+dp[i][j-1]
                else:
                    dp[i][j]=0
        return dp[m-1][n-1]