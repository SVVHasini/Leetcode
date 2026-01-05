class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int five=0,ten=0,twenty=0;
        for(int i=0;i<n;i++)
        {
            if(bills[i]==5)
            {
                five++;
            }
            else if(bills[i]==10)
            {
                if(five>=1)
                {
                    five--;
                    ten++;
                }
                else
                {
                    return false;
                }
            }
            else if(bills[i]==20)
            {
                if(five>=1&&ten>=1)
                {
                    twenty++;
                    ten--;
                    five--;
                }
                else if(five>=3)
                {
                    twenty++;
                    five-=3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};