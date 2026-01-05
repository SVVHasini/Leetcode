class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int max=0;
        for(int i=0;i<k;i++)
        {
            max+=nums[i];
        }
        int m=max;
        double maxavg;
        for(int i=k;i<nums.size();i++)
        {
            m-=nums[i-k];
            m+=nums[i];
            max=max<m?m:max;
        }
        maxavg=(double)(max)/(double)(k);
        return maxavg;
    }
};