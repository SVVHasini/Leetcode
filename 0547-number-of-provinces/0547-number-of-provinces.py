class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        def dfs(i):
            for j in range(len(isConnected)):
                if isConnected[i][j]==1 and j not in visited:
                    visited.add(j)
                    dfs(j) 
        
        visited=set()
        count=0
        for i in range(len(isConnected)):
            if i not in visited:
                visited.add(i)
                dfs(i)
                count+=1
        return count