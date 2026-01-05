class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int l=0,r=0;
        int n=s.size();
        int m=g.size();
        while(l<n&&r<m)
        {
            if(s[l]>=g[r])
            {
                r++;
            }
            l++;
        }
        return r;
    }
};