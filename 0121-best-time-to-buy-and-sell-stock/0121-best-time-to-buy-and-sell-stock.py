class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minv=float(inf)
        maxv=0
        for i in prices:
            minv=min(minv,i)
            maxv=max(maxv,i-minv)
        return maxv
            