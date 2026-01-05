class Solution {
public:
    void Solve(vector<int>& candy,vector<vector<int>>&res,vector<int>&sub, int target, int sum,int ind)
    {
        if(sum==target)
        {
            res.push_back(sub);
            return;
        }
        else if(sum<target)
        {
            for(int i=ind;i<candy.size();i++)
            {
                if (i > ind && candy[i] == candy[i - 1]) continue;
                sub.push_back(candy[i]);
                Solve(candy,res,sub,target,sum+candy[i],i+1);
                sub.pop_back();
            }
        }
        else
        {
            return;
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>res;
        vector<int>sub;
        int sum=0;
        Solve(candidates,res,sub,target,sum,0);
        return res;
    }
};