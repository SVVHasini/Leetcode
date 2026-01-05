/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void Solve(TreeNode* root,vector<string>&result,string path)
    {
        if(root->left==NULL&&root->right==NULL)
        {
            result.push_back(path);
            return;
        }
        else
        {
            if(root->left!=NULL)
            {
                int len=path.length();
                TreeNode* dum=root->left;
                Solve(root->left,result,path+"->"+to_string(dum->val));
                path=path.substr(0,len);
            }
            if(root->right!=NULL)
            {
                int len=path.length();
                TreeNode* dum=root->right;
                Solve(root->right,result,path+"->"+to_string(dum->val));
                path=path.substr(0,len);
            }
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>result;
        string path=""+to_string(root->val);
        // cout<<path;
        Solve(root,result,path);
        return result;
    }
};