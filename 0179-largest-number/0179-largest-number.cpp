class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        vector<string>snums(n);
        for(int i=0;i<n;i++)
        {
            snums[i]=to_string(nums[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                string s1=snums[i]+snums[j];
                string s2=snums[j]+snums[i];
                if(s2>s1)
                {
                    swap(snums[i],snums[j]);
                }
            }
        }
        string result="";
        for(int i=0;i<n;i++)
        {
            result+=snums[i];
        }
        if(result[0]=='0')
        {
            return "0";
        }
        return result;
    }
};