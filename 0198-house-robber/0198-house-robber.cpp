class Solution {
public:
    int rob(vector<int>& nums) 
    {
        if(nums.size()==0) return 0;
        else if(nums.size()==1)return nums[0];
        else if(nums.size()==2)return nums[0]>nums[1]?nums[0]:nums[1];
        int pick,not_pick,curi;
        int prev1=nums[1]>nums[0]?nums[1]:nums[0];
        int prev2=nums[0];
        for(int i=2;i<nums.size();i++)
        {
            curi=nums[i];
            pick=curi+prev2;
            not_pick=0+prev1;
            curi=pick>not_pick?pick:not_pick;
            prev2=prev1;
            prev1=curi;
        }
        return prev1;
        // vector<int>dp(nums.size(),-1);
        // int pick,not_pick;
        // dp[0]=nums[0];
        // for(int i=1;i<nums.size();i++)
        // {
        //     if(i>1)
        //     {
        //         pick=nums[i]+nums[i-2];
        //     }
        //     not_pick=0+nums[i-1];
        //     dp[i]=pick>not_pick?pick:not_pick;
        // }
        // return ;
    }
};