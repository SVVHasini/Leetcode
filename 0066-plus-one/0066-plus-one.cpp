class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int>b(n+1);
        b[0]=1;
        int j=1,c=0;
        for(int i=0;i<n;i++)
        {
            if(digits[i]==9)
            {
                c+=1;
            }
        }
        if(c==n)
        {
            for(int i=0;i<n;i++)
            {
                b[j]=0;
                j+=1;
            }
            return b;
        }
        else
        {
            for(int i=n-1;i>=0;i--)
            {
                if(digits[i]!=9)
                {
                    digits[i]=digits[i]+1;
                    break;
                }
                else
                {
                    digits[i]=0;
                }
            }
        }
        return digits;
    }
};