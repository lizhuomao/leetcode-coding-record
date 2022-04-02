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
//8ms 21MB dfs
class Solution {
public:
    bool dfs(TreeNode* root, long long l, long long r)
    {
        if (root == NULL) return true;
        if (root -> val <= l || root -> val >= r) return false;
        return dfs(root -> left, l, root -> val) && dfs(root -> right, root -> val, r);
    }
    bool isValidBST(TreeNode* root) 
    {
        return dfs(root, LONG_MIN,LONG_MAX);
    }
};
//12ms 21.1MB 中序遍历
bool LDR(TreeNode* root)
    {
        if (root == NULL) return true;
        if (!LDR(root -> left)) return false;
        if (root -> val <= prev) return false;
        prev = root -> val;
        if (!LDR(root -> right)) return false;
        else return true;
    }
    
    bool isValidBST(TreeNode* root) 
    {
        return LDR(root);
    }
