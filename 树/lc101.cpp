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
//12ms 15.9MB
class Solution {
    public:
    
    bool compare(TreeNode* r1, TreeNode* r2)
    {
        if (r1 == NULL && r2 == NULL) return true;
        if (r1 == NULL || r2 == NULL) return false;
        if (r1 -> val != r2 -> val) return false;
        return compare(r1 -> left, r2 -> right) && compare(r1 -> right, r2 -> left);
    }
    bool isSymmetric(TreeNode* root) 
    {
        return compare(root, root);
    }
};