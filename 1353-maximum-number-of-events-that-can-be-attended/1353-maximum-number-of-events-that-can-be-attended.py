class Solution:
    def maxEvents(self, events: List[List[int]]) -> int:
        events.sort()
        i,c=0,0
        q=[]
        while i<len(events) or q:
            if not q:
                d=events[i][0]
            while i<len(events) and d==events[i][0]:
                heapq.heappush(q,events[i][1])
                i+=1
            if d<=q[0]:
                heapq.heappop(q)
                c+=1
                d+=1
            while q and d>q[0]:
                heapq.heappop(q)
        return c