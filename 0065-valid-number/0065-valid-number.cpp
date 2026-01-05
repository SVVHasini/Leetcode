class Solution {
public:
    bool isNumber(string s) {
        bool num=false,sign=false,dot=false,exp=false;
        int len=s.length();
        for(int i=0;i<len;i++)
        {
            if(s[i]=='+'||s[i]=='-')
            {
                if(num==true||dot==true||sign==true||len==1)
                {
                    return false;
                }
                sign=true;
            }
            else if(s[i]>='0'&& s[i]<='9')
            {
            cout<<"HI";
                num=true;
            }
            else if(s[i]=='.')
            {
                if(dot==true||exp==true||len==1)
                {
                    return false;
                }
                dot=true;
            }
            else if(s[i]=='e'||s[i]=='E')
            {
                if(exp==true||num==false)
                {
                    return false;
                }
                else
                {exp=true;
                num=false;
                sign=false;
                dot=false;}
            }
            else
            {
                return false;
            }
        }
        return num;
    }
};