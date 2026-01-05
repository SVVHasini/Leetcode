class Solution {
public:
     map<char,int>alpha={{'q',1},{'w',1},{'e',1},{'r',1},{'t',1},{'y',1},{'u',1},{'i',1},{'o',1},{'p',1},{'a',2},{'s',2},{'d',2},{'f',2},{'g',2},{'h',2},{'j',2},{'k',2},{'l',2},{'z',3},{'x',3},{'c',3},{'v',3},{'b',3},{'n',3},{'m',3}};
    
    void KeyboardCheck(vector<string>&words,vector<string>&res,int i)
    {
        if(i!=words.size())
        {
            string s=words[i];
            int row=alpha[tolower(s[0])];
            bool sameRow=true;
            for(int j=1;j<s.length();j++)
            {
                if(alpha[tolower(s[j])]!=row)
                {
                    sameRow=false;
                    break;
                }
            }
            if(sameRow)
            {
                res.push_back(s);
            }
            KeyboardCheck(words,res,i+1);
        }
    }

    vector<string> findWords(vector<string>& words) {
        vector<string>res;
        KeyboardCheck(words,res,0);
        return res;
    }
};