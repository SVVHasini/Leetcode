class Solution {
    public boolean isPowerOfFour(int n) {
        if(n==1){
            return true;
        }
        if(n<=3){
            return false;
        }
        long i=1,s=4;
        while(s<=n){
            if(s==n){
                return true;
            }
            s*=4;
            i+=1;
        }
        return false;
    }
}