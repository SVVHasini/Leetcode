class Solution:
    def longestPalindrome(self, s: str) -> str:
        m=0
        st=""
        for n in range(len(s)):
            i,j=n,n
            while(i>=0 and j<len(s) and s[i]==s[j]):
                if (j - i + 1) > m:
                    st = s[i:j+1]
                    m = j - i + 1
                i-=1
                j+=1
            i,j=n,n+1
            while(i>=0 and j<len(s)and s[i]==s[j]):
                if (j - i + 1) > m:
                    st = s[i:j+1]
                    m = j - i + 1
                i-=1
                j+=1
        return st