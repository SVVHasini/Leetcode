class Solution {
public:
    void Solve(vector<int>&candidates,int target,vector<vector<int>>&result,vector<int>&sub,int sum,int start)
    {
        if(sum==target)
        {
            result.push_back(sub);
            return;
        }
        else if(sum<target)
        {
            for(int i=start;i<candidates.size();i++)
            {
                sub.push_back(candidates[i]);
                Solve(candidates,target,result,sub,sum+candidates[i],i);
                sub.pop_back();
            }
        }
        else
        {
            return;
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>sub;
        Solve(candidates,target,result,sub,0,0);
        return result;
    }
};