class Solution:
    def minChanges(self, s: str) -> int:
        prev=-16
        res=[]
        x=0
        string=""
        for i in range(0,len(s)):
            if string=="":
                string+=s[i]
                prev=s[i]
                continue
            if s[i]==prev:
                string+=s[i]
                prev=s[i]
                continue
            if s[i]!=prev:
                if len(string)%2==0:
                    res.append(string)
                    string=""
                    string+=s[i]
                    prev=s[i]
                else:
                    x+=1
                    if not(int(s[i])):
                        string+=str(1)
                    else:
                        string+=str(0)
                    res.append(string)
                    string=""
        return x                