class Solution {
    public long removeZeros(long n) {
        long temp=0,rem=0;
        while(n>0){
            rem=n%10;
            if(rem!=0){
                temp=temp*10+rem;
            }
            n/=10;
        }
        n=temp;
        temp=0;
        while(n>0){
            rem=n%10;
            temp=temp*10+rem;
            n/=10;
        }
        return temp;
    }
}