class Solution:
    def findLucky(self, arr: List[int]) -> int:
        d={}
        m=0
        ret=-1
        arr.sort()
        for i in arr:
            if i in d:
                d[i]+=1
            else:
                d[i]=1
        for key in d:
            if key==d[key]:
                ret=key
        return ret