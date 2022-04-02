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
//12ms 20.9MB
//二分法
class Solution {
public:
    TreeNode* fun(int l, int r, vector<int>& nums)
    {
        if (l > r) return NULL;
        TreeNode* root = new TreeNode(nums[(l + r) / 2], NULL, NULL);
        if(l == r) return root;
        root -> left = fun(l, (l + r) / 2 - 1, nums);
        root -> right = fun((l + r) / 2 + 1, r, nums);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        TreeNode* r = NULL;
        r = fun(0, nums.size() - 1, nums);
        return r;
    }
};
//20ms 19.9MB
class Solution {
public:
    void fun(TreeNode* &root, int l, int r, vector<int>& nums)
    {
        if (l > r) return;
        root = new TreeNode(nums[(l + r) / 2], NULL, NULL);
        cout << root -> val <<endl;
        if(l == r) return;
        fun(root -> left, l, (l + r) / 2 - 1, nums);
        fun(root -> right, (l + r) / 2 + 1, r, nums);
        return;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        TreeNode* r = NULL;
        fun(r, 0, nums.size() - 1, nums);
        return r;
    }
};