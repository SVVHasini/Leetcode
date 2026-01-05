class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>count;
        int res=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(count[nums[i]]<1)
            {
                count[nums[i]]=1;
            }
            else
            {
                count[nums[i]]++;
            }
        }
        for(int i=1;i<n;i++)
        {
            if(count[i]>1)
            {
                res=i;
                break;
            }
        }
        return res;
    }
};