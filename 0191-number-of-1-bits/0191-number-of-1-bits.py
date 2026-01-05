class Solution:
    def hammingWeight(self, n: int) -> int:
        n=bin(n)
        c=0
        s=str(n)
        s=s[2:]
        for i in s:
            if i=='1':
                c+=1
        return c