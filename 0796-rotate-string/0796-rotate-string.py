class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if s==goal:
            return True
        original=s
        s=s[1:len(s)]+s[0]
        while(s!=original):
            if s==goal:
                return True
            s=s[1:len(s)]+s[0]
        return False