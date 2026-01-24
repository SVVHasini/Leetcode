class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s)<=1:
            return len(s)
        ls=s[0]
        maximum=-100
        count=0
        for i in s[1:]:
            if i in ls and ls.index(i)==0:
                ls=ls.replace(i,"")
                ls+=i
            elif i in ls:
                count=len(ls)
                ls=ls[ls.index(i)+1:]+i
                if maximum<count:
                    maximum=count
            else:
                ls+=i
            print(ls)
        count=len(ls)
        if maximum<count:
            maximum=count
        return maximum
        