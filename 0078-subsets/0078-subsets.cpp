class Solution 
{
public:
    void Solve(vector<int>& nums,vector<vector<int>>&result,vector<int>&subset,int index)
    {
        if(index==nums.size())
        {
            result.push_back(subset);
            return;
        }
        else
        {
            subset.push_back(nums[index]);
            Solve(nums,result,subset,index+1);
            subset.pop_back();
            Solve(nums,result,subset,index+1);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>result;
        vector<int>subset;
        Solve(nums,result,subset,0);
        return result;
    }
};