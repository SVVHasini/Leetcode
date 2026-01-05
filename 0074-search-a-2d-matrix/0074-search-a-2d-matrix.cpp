class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0,row=matrix.size(),col=matrix[0].size(),high=(row*col)-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int r=mid/col;
            int c=mid%col;
            if(matrix[r][c]==target)
            {
                return true;
            }
            if(matrix[r][c]<target)
            {
                low=mid+1;
            }
            if(matrix[r][c]>target)
            {
                high=mid-1;
            }
        }
        return false;
    }
};