from collections import defaultdict
from math import gcd
class Solution:
    def maxPoints(self, points: List[List[int]]) -> int:
        if len(points)<=2:
            return len(points)
        max_len=0
        for i in range(len(points)):
            
            duplicate=1 
            slopes=defaultdict(int)
            current_max=0
            for j in range(len(points)):
                if i==j:
                    continue
                x1,y1=points[i]
                x2,y2=points[j]
                dx=x2-x1
                dy=y2-y1
                if dx==0 and dy==0:
                    duplicate+=1
                else:
                    g=gcd(dx,dy)
                    slope=(dy//g,dx//g)
                    if slope[1]<0:
                        slope=(-slope[0],-slope[1])
                    slopes[slope]+=1
                    current_max=max(current_max,slopes[slope])
            max_len=max(max_len,current_max+duplicate)
        return max_len