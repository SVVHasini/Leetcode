class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size(),i=0;
        for(i=0;i<n;i++)
        {
            if(target<=nums[i])
            {
                break;
            }
        }
        if(i==n)
        {
            return n;
        }
        return i;
    }
};