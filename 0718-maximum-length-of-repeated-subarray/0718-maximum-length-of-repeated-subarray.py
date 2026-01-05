class Solution:
    def findLength(self, nums1: List[int], nums2: List[int]) -> int:
        n=len(nums1)
        m=len(nums2)
        res=0
        dp=[[0]*m for _ in range(n)]
        for i in range(n):
            for j in range(m):
                if nums1[i]==nums2[j]:
                    if i==0 or j==0:
                        dp[i][j]=1
                    else:
                        dp[i][j]=dp[i-1][j-1]+1
                    res=max(res,dp[i][j])
        return res