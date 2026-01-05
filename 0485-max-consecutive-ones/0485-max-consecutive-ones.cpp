class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int n = nums.size();
        if (n == 1 && nums[0] == 0)
        {
            return 0;
        }    
        int max = 0, count = 0;
        for (int i = 0; i < n; i++) 
        {
            if (nums[i] == 1) 
            {
                if(i==0)
                {
                    count++;
                    continue;
                }
                if (nums[i] == nums[i - 1]) 
                {
                    count++;
                } 
                else 
                {
                    if (count > max) 
                    {
                        max = count;
                    }
                    count = 1;
                }
            }
        }
        if (count > max) 
        {
            max = count;
        }
        return max;
    }
};