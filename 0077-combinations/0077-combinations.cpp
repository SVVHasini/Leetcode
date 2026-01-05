class Solution {
public:
    void Solve(vector<int>&nums,vector<vector<int>>&result,vector<int>sub,int ind,int k)
    {
        if(sub.size()==k)
        {
            result.push_back(sub);
            return;
        }
        else
        {
            for(int i=ind+1;i<nums.size();i++)
            {
                sub.push_back(nums[i]);
                Solve(nums,result,sub,i,k);
                sub.pop_back();
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums;
        for(int i=1;i<=n;i++)
        {
            nums.push_back(i);
        }
        vector<vector<int>>result;
        vector<int>sub;
        if(n==1)
        {
            result.push_back(nums);
            return result;
        }
        for(int i=0;i<n;i++)
        {
            sub.push_back(nums[i]);
            Solve(nums,result,sub,i,k);
            sub.pop_back();
        }
        return result;
    }
};