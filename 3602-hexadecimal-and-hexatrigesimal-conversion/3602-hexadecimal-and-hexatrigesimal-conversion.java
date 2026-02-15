class Solution {
    public String concatHex36(int n) {
        int square=n*n;
        int cube=n*n*n;
        String hexString = Integer.toHexString(square);
        String hexatrigesimal = Integer.toString(cube, 36);
        String s= hexString+hexatrigesimal;
        s=s.toUpperCase();
        return s;
    }
}