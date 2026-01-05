class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        prev=[1]
        c=0
        while c<rowIndex:
            pres=[1]*(len(prev)+1)
            for i in range(1,len(pres)-1):
                pres[i]=prev[i-1]+prev[i]
            prev=pres
            c+=1
        return prev