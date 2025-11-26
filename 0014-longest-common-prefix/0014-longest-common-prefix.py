class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        s=strs[0]
        c=0
        res=""
        for i in range(len(s)):
            for r in strs:
                if i<=len(r)-1:
                    if s[i]==r[i]:
                        c+=1
                    else:
                        break
                else:
                    break
            if c==(len(strs)):
                res+=s[i]
                c=0
            else:
                break
        return res