class Solution:
    def isBipartite(self, graph: List[List[int]]) -> bool:
        colour={}
        for n in range(len(graph)):
            if n not in colour:
                q=deque([n])
                colour[n]=0
                while q:
                    curr=q.popleft()
                    for ne in graph[curr]:
                        if ne not in colour:
                            colour[ne]=1-colour[curr]
                            q.append(ne)
                        elif colour[ne]==colour[curr]:
                            return False
        return True