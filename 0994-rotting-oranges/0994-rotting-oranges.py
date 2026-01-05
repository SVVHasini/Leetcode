class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        rows,cols=len(grid),len(grid[0])
        time,fresh=0,0
        q=deque()
        for i in range(rows):
            for j in range(cols):
                if grid[i][j]==2:
                    q.append((i,j))
                elif grid[i][j]==1:
                    fresh+=1
        directions=[(0,1),(1,0),(0,-1),(-1,0)]
        while q and fresh>0:
            for _ in range(len(q)):
                r,c=q.popleft()
                for dr,dc in directions:
                    row,col=r+dr,c+dc
                    if 0<=row<rows and 0<=col<cols and grid[row][col]==1:
                        grid[row][col]=2
                        q.append((row,col))
                        fresh-=1
            time+=1
        if fresh==0:
            return time
        else:
            return -1