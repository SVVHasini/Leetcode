class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        adj=defaultdict(list)
        if n==1:
            return 1
        for u,v in trust:
            adj[u].append(v)
            adj[v]
        j=-1
        for i in adj:
            if len(adj[i])==0:
                j=i
                break
        for i in adj:
            if j not in adj[i] and i!=j:
                j=-1
        return j

            