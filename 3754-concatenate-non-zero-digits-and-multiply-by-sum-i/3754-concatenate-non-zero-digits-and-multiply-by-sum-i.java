class Solution {
    public long sumAndMultiply(int n) {
        long x=0,sum=0;
        long rem;
        while(n>0){
            rem=n%10;
            if(rem!=0){
                x=x*10+rem;
                sum+=rem;
            }
            n=n/10;
        }
        long temp=x;
        x=0;
        while(temp>0){
            rem=temp%10;
            x=x*10+rem;
            temp/=10;
        }
        return x*sum;
    }
}