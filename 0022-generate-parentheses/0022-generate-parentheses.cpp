class Solution {
public:
    void Solve(int n,string ans,int op,int cl,vector<string>&result)
    {
        if(op==n&&cl==n)
        {
            result.push_back(ans);
            return;
        }
        else
        {
            if(op<n)
            {
                Solve(n,ans+'(',op+1,cl,result);
            }
            if(op>cl)
            {
                Solve(n,ans+')',op,cl+1,result);
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        Solve(n,"",0,0,result);
        return result;
    }
};