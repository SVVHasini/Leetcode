class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),ind=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i+1]>nums[i])
            {
                ind=i;
                break;
            }
        }
        int l=0,m=n-1;
        if(ind==-1)
        {
            while(l<m)
            {
                swap(nums[l],nums[m]);
                l++;
                m--;
            }
        }
        else
        {
            for(int i=n-1;i>=ind;i--)
            {
                if(nums[i]>nums[ind])
                {
                    swap(nums[i],nums[ind]);
                    break;
                }
            }
            int i=ind+1,j=n-1;
            while(i<j)
            {
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
        }
    }
};