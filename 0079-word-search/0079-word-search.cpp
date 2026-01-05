class Solution 
{
public:
    bool Solve(string &s, int ind, int i, int j, vector<vector<char>> &grid, vector<vector<bool>> &visited) 
    {
        if (ind == s.size()) 
        {
            return true;
        }

        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || visited[i][j] || grid[i][j] != s[ind]) 
        {
            return false;
        }

        visited[i][j] = true;

        bool found = Solve(s, ind + 1, i + 1, j, grid, visited) ||  // Down
                     Solve(s, ind + 1, i - 1, j, grid, visited) ||  // Up
                     Solve(s, ind + 1, i, j + 1, grid, visited) ||  // Right
                     Solve(s, ind + 1, i, j - 1, grid, visited);    // Left

        visited[i][j] = false;

        return found;
    }

    bool exist(vector<vector<char>> &grid, string s) 
    {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));

        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                if (grid[i][j] == s[0]) 
                {
                    if (Solve(s, 0, i, j, grid, visited)) 
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
