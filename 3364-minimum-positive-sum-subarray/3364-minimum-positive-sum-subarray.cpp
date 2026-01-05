class Solution {
public:
    int PositiviyCheck(vector<int>&nums,int k)
    {
        int val=0,minval=INT_MAX;
        for(int i=0;i<k;i++)
        {
            val+=nums[i];
        }
        if(val>0){minval=val;}
        for(int i=k;i<nums.size();i++)
        {
            val=val+nums[i]-nums[i-k];
            if(val>0&&val<minval)
            {
                minval=val;
            }
        }
        return minval==INT_MAX?-1:minval;
    }
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int current=INT_MAX;
        for(int i=l;i<=r;i++)
        {
            int x=PositiviyCheck(nums,i);
            if(x!=-1&&x<current)
            {
                current=x;
            }
        }
        return current==INT_MAX?-1:current;
    }
};