class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        int a[n];
        int c=0,j=0;
        for(int i=0;i<n;i++)
        {
            if (s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                a[j]=s[i];
                j++;
            }
            else if((s[i]==')'||s[i]=='}'||s[i]==']')&&j==0)
            {
                break;
            }
            else if (s[i]==')'&&a[j-1]=='('||s[i]==']'&&a[j-1]=='['||s[i]=='}'&&a[j-1]=='{')
            {
                j--;
            }
            else{
                break;
            }
            c++;
        }
        if(c==n&&j==0)
        {
            return true;
        }
        return false;
    }
};