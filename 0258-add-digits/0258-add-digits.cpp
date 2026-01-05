class Solution {
public:
    int addDigits(int num) {
        if (num%9!=0)
        {
            int n=num/9;
            int x=n*9;
            return num-x;
        }
        else if(num==0)
        {
            return num;
        }
        return 9;
    }
};