class Solution {
    public boolean isPowerOfThree(int n) {
        if(n==1){
            return true;
        }
        if(n<=2){
            return false;
        }
        long i=1,s=3;
        while(s<=n){
            if(s==n){
                return true;
            }
            s*=3;
            i+=1;
        }
        return false;
    }
}