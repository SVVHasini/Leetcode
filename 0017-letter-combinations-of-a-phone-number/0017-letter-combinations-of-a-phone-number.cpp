class Solution {
public:
    void Solve(string digits,unordered_map<char,string>&dail,string st,vector<string>&result,int i)
    {
        if(st.length()==digits.length())
        {
            result.push_back(st);
            return;
        }
        else
        {
            string pair=dail[digits[i]];
            for(int j=0;j<pair.length();j++)
            {
                Solve(digits,dail,st+pair[j],result,i+1);
            }
        }
    }
    vector<string> letterCombinations(string digits)
    {
        unordered_map<char,string>dail={
            {'2',"abc"},
            {'3',"def"},
            {'4',"ghi"},
            {'5',"jkl"},
            {'6',"mno"},
            {'7',"pqrs"},
            {'8',"tuv"},
            {'9',"wxyz"}
        };
        vector<string>result;
        if(digits.length()==0)
        {
            return result;
        }
        Solve(digits,dail,"",result,0);
        return result;
    }
};