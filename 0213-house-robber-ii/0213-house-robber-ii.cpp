class Solution {
public:
    int calculate(vector<int>&nums)
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
    }
    int rob(vector<int>& nums) 
    {
        if(nums.size()==0)return 0;
        if(nums.size()==1)return nums[0];
        if(nums.size()==2)return nums[0]>nums[1]?nums[0]:nums[1];
        vector<int>temp1,temp2;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
        return calculate(temp1)>calculate(temp2)?calculate(temp1):calculate(temp2);
    }
};