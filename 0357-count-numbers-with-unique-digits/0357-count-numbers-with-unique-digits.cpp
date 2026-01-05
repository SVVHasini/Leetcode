class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n<=1)
        {
            return pow(10,n);
        }
        int res=0;
        int a=9,b=9;
        for(int i=2;i<=n;i++)
        {
            a*=b;
            res+=a;
            b--;
        }
        return 10+res;
    }
};