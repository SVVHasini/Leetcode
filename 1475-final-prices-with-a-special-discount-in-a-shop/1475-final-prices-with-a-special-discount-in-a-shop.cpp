class Solution {
public:
    void afterDiscount(vector<int>&prices,vector<int>&res,int i)
    {
        if(i<prices.size()-1)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[i]>=prices[j])
                {
                    res.push_back(prices[i]-prices[j]);
                    break;
                }
                else if(j==prices.size()-1)
                {
                    res.push_back(prices[i]);
                    break;
                }
            }
            afterDiscount(prices,res,i+1);
        }
        else if(i==prices.size()-1)
        {
            res.push_back(prices[i]);
        }
        return;
    }
    vector<int> finalPrices(vector<int>& prices) 
    {
        vector<int>res;
        afterDiscount(prices,res,0);
        return res;
    }
};