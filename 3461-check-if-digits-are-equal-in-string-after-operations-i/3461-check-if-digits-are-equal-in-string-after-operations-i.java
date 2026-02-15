class Solution {
    public boolean hasSameDigits(String s) {
        if (s.length() == 2) {
            if (s.charAt(0) == s.charAt(1)) {
                return true;
            }
            return false;
        }
        String r = "";
        for (int i = 0; i < s.length() - 1; i++) {
            int digit1 = s.charAt(i) - '0';
            int digit2 = s.charAt(i + 1) - '0';
            int num = (digit1 + digit2) % 10;
            r += String.valueOf(num);
        }
        boolean ret = hasSameDigits(r);
        return ret;
    }
}