class Solution {
    public int mirrorDistance(int n) {
        int revn=0;
        int x=n,temp=0;
        while(x>0){
            temp=x%10;
            revn=revn*10+temp;
            x/=10;
        }
        return Math.abs(n-revn);
    }
}