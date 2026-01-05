class Solution {
public:
    // void Solve(vector<int>& nums,int n,int sum, int index,int max)
    // {
    //     if(sum>max)
    //     {
    //         max=sum;
    //         return;
    //     }
    //     else
    //     {
    //         for(int i=index+1;i<n;i++)
    //         {
    //             sum=sum+nums[i];
    //             Solve(nums,n,sum,index+1,max);
    //         }
    //     }
    // }
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
        int sum=nums[0];
        for(int i=1;i<n;i++)
        {
            sum=max(nums[i],sum+nums[i]);
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};