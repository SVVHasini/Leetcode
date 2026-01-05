class Solution {
public:
    int findPeakElement(vector<int>& piles){
        long long int max=-2147483648;
        int n=0;
        for(int i=0;i<piles.size();i++)
        {
            if(piles[i]>max)
            {
                max=piles[i];
                n=i;
            }
        }
        return n;
    }
};