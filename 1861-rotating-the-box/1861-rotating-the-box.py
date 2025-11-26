class Solution:
    def rotateTheBox(self, box: List[List[str]]) -> List[List[str]]:
        for boxRow in box:
            for ind in range(len(boxRow)):
                while boxRow[ind]=='.' and ind!=0 and boxRow[ind-1]=='#':
                    temp=boxRow[ind]
                    boxRow[ind]=boxRow[ind-1]
                    boxRow[ind-1]=temp
                    ind-=1
        box = [list(row) for row in zip(*box)]
        for row in box:
            row.reverse()
        return box