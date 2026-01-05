class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        n=-1
        for i in s:
            if i in t:
                x=t.index(i)
                # if x>n:
                #     n=x
                # else:
                #     return False
                temp=""+t[x+1:]
                t=temp
                print(n)
            else:
                return False
        return True