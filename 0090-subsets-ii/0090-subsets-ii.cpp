class Solution {
public:
    void Solve(vector<int>& nums,vector<vector<int>>&result,vector<int>&list,int i)
    {
        result.push_back(list);
        int index;
        for(index=i;index<nums.size();index++)
        {
            if(i!=index&&nums[index]==nums[index-1])
            {
                continue;
            }
            list.push_back(nums[index]);
            Solve(nums,result,list,index+1);
            list.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        vector<int>list;
        Solve(nums,result,list,0);
        return result;
    }
};