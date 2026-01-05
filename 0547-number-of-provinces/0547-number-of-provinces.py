from collections import defaultdict
class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        adj=defaultdict(list)
        for i in range(len(isConnected)):
            for j in range(len(isConnected[0])):
                if isConnected[i][j]==1 and i!=j:
                    adj[i].append(j)
        n=len(isConnected)
        visited=[0]*(n)
        c=0
        def dfs(x):
            visited[x]=1
            for j in adj[x]:
                if not visited[j]:
                    dfs(j)

        for i in range(n):
            if visited[i]==0:
                dfs(i)
                c+=1
        return c