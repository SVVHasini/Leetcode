class Solution {
    public int findClosest(int x, int y, int z) {
        int per1=Math.abs(z-x);
        int per2=Math.abs(z-y);
        if(per1>per2){
            return 2;
        }
        else if(per1<per2){
            return 1;
        }
        return 0;
    }
}