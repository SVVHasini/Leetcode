class Solution:
    def frequencySort(self, s: str) -> str:
        d={}
        for i in s:
            if i in d:
                d[i]+=1
            else:
                d[i]=1
        st=sorted(d.keys(),key=lambda x:-d[x])
        result = ''
        for char in st:
            result += char * d[char]  # Repeat char according to its frequency
        
        return result