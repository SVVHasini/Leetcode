class Solution:
    def myAtoi(self, s: str) -> int:
        # Helper to clamp result within 32-bit signed integer range
        def clamp_32bit(x):
            INT_MIN, INT_MAX = -2**31, 2**31 - 1
            return max(INT_MIN, min(x, INT_MAX))
        
        # Step 1: Trim whitespace
        s = s.lstrip()
        if not s:
            return 0
        
        # Step 2: Handle sign
        sign = 1
        if s[0] == '-':
            sign = -1
            s = s[1:]
        elif s[0] == '+':
            s = s[1:]

        # Step 3: Convert digits
        num = 0
        for char in s:
            if char.isdigit():
                num = num * 10 + int(char)
            else:
                break

        # Step 4: Apply sign
        num *= sign

        # Step 5: Clamp result
        return clamp_32bit(num)
        