class Solution {
public:
    void Solve(vector<int>&nums,vector<vector<int>>&result,vector<int>&sub,bool init)
    {
        int c=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=sub[i])
            {
                c+=1;
                break;
            }
        }
        if(c==0&&init==false)
        {
            return ;
        }
        else if(init==true&&c==0)
        {
            init=false;
        }
        result.push_back(sub);
        int ind=-1;
        for(int i=sub.size()-2;i>=0;i--)
        {
            if(sub[i+1]>sub[i])
            {
                ind=i;
                break;
            }
        }
        int l=0,m=sub.size()-1;
        if(ind==-1)
        {
            while(l<m)
            {
                swap(sub[l],sub[m]);
                l++;
                m--;
            }
            Solve(nums,result,sub,init);
        }
        else
        {
            for(int i=sub.size()-1;i>=ind;i--)
            {
                if(sub[i]>sub[ind])
                {
                    swap(sub[i],sub[ind]);
                    break;
                }
            }
            int i=ind+1,j=sub.size()-1;
            while(i<j)
            {
                swap(sub[i],sub[j]);
                i++;
                j--;
            }
            Solve(nums,result,sub,init);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>sub;
        vector<vector<int>>result;
        sub=nums;
        Solve(nums,result,sub,true);
        return result;
    }
};