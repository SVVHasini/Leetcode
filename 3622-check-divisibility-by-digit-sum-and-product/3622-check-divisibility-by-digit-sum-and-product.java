class Solution {
    public boolean checkDivisibility(int n) {
        int x=n;
        int s=0,p=1;
        while(x>0){
            int rem=x%10;
            s+=rem;
            p*=rem;
            x/=10;
        }
        int div=s+p;
        if(n%div==0){
            return true;
        }
        return false;
    }
}