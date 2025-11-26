class Solution:
    def makeFancyString(self, s: str) -> str:
        r=""
        n=len(s)
        j=0
        if len(s)<3:
            return s
        for i in range(n-2):
            print()
            if s[i+1]==s[i] and s[i+2]==s[i]:
                j=i
                continue
            else:
                 r+=s[i]
            j=i
        r+=s[j+1]+s[j+2]
        return r