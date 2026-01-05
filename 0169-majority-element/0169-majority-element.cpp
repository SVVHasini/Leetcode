class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int x=(int)(n/2);
        map<int,int>counts;
        for( int i=0;i<n;i++)
        {
            if(counts[nums[i]]==0)
            {
                counts[nums[i]]=1;
            }
            else
            {
                counts[nums[i]]++;
            }
        }
        int result;
        for(int i=0;i<n;i++)
        {
            if(counts[nums[i]]>x)
            {
                result=nums[i];
            }
        }
        return result;
    }
};