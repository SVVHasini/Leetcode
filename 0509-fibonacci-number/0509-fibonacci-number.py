class Solution:
    def fib(self, n: int) -> int:
        if n==0:
            return 0
        if n==1:
            return 1
        prev1=0
        prev2=1
        for i in range(n-1):
            pres=prev1+prev2
            prev1=prev2
            prev2=pres
        return prev2