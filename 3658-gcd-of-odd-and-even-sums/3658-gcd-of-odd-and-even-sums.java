class Solution {
    public int gcdOfOddEvenSums(int n) {
        int so=sumo(n);
        int se=sume(n);
        int ret=gcd(so,se);
        return ret;
    }
    public static int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    public static int sumo(int n){
        int sum=0;
        int count=1;
        int i=1;
        while(count<=n){
            sum+=i;
            i+=2;
            count++;
        }
        return sum;
    }
    public static int sume(int n){
        int sum=0;
        int count=1;
        int i=2;
        while(count<=n){
            sum+=i;
            i+=2;
            count++;
        }
        return sum;
    }
}