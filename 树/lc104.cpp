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
//8ms
//18.2MB
class Solution {
public:
    int dfs(TreeNode* root)
    {
        if (root == NULL) return 0;
        int l = dfs(root -> left);
        int r = dfs(root -> right);
        return (l > r ? l : r) + 1;
    }
    int maxDepth(TreeNode* root) 
    {
        return dfs(root);
    }
};