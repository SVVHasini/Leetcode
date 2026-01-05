class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int n=nums.size(),prod=1,zero=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]!=0)
        //     {
        //         prod*=nums[i];
        //     }
        //     else if(zero==0)
        //     {
        //         zero++;
        //     }
        //     else
        //     {
        //         prod=prod*0;
        //     }

        // }
        // vector<int>result;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]!=0&&zero==0)
        //     {
        //         int x=int(prod/nums[i]);
        //         result.push_back(x);
        //     }
        //     else if(nums[i]!=0&&zero>0)
        //     {
        //         result.push_back(0);
        //     }
        //     else
        //     {
        //         result.push_back(prod);
        //     }
        // }
        // return result;
        int n=nums.size();
        vector<int>result(n,0);
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);
        prefix[0]=1;
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        suffix[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            suffix[i]=suffix[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
            result[i]=(prefix[i]*suffix[i]);
        }
        return result;
    }
};




























