class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        n=len(grid)
        m=len(grid[0])
        c=0
        def fun(i,j,g):
            if i<0 or i>=n or j<0 or j>=m:
                return
            if g[i][j]=='0':
                return
            g[i][j]='0'
            fun(i+1,j,g)
            fun(i,j+1,g)
            fun(i-1,j,g)
            fun(i,j-1,g)
        for i in range(n):
            for j in range(m):
                if grid[i][j]=='1':
                    c+=1
                    fun(i,j,grid)
        return c
