class Solution {
public:
    int dfs(TreeNode* root) {
        if (root == nullptr) return 0;

        int l = dfs(root->left);
        if (l == -1) return -1;  // left subtree is unbalanced

        int r = dfs(root->right);
        if (r == -1) return -1;  // right subtree is unbalanced

        if (abs(l - r) > 1) return -1;  // current node is unbalanced

        return max(l, r) + 1;  // return height
    }

    bool isBalanced(TreeNode* root) {
        return dfs(root) != -1;
    }
};
