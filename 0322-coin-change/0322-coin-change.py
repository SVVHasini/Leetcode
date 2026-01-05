class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        d=[amount+1]*(amount+1)
        d[0]=0
        for x in coins:
            for i in range(x,len(d)):
                diff=abs(i-x)
                d[i]=min(d[i],d[diff]+1)
        if d[amount]==amount+1:
            return -1
        return d[amount]