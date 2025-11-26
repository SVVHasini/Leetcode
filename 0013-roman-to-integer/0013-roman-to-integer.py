class Solution:
    def romanToInt(self, s: str) -> int:
        d={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        val=0
        if 'IV' in s:
            s=s.replace('IV','IIII')
        if 'IX' in s:
            s=s.replace('IX','VIIII')
        if 'XL' in s:
            s=s.replace('XL','XXXX')
        if 'XC' in s:
            s=s.replace('XC','LXXXX')
        if 'CD' in s:
            s=s.replace('CD','CCCC')
        if 'CM' in s:
            s=s.replace('CM','DCCCC')
        for i in s:
            val+=(d[i])
        return(val)
        