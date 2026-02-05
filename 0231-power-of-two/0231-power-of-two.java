class Solution {
    public boolean isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        long i=1,s=2;
        while(s<=n){
            if(s==n){
                return true;
            }
            s*=2;
            i+=1;
        }
        return false;
    }
}