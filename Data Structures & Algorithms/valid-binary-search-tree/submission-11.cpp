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

    bool check(TreeNode* root, int low, int high)
    {
        if(root==NULL)
        return true;

        if(root->val<=low or root->val>=high)
        return false;

        return (check(root->left,low,root->val) and check(root->right,root->val,high));
    }
    bool isValidBST(TreeNode* root) {
        int low=INT_MIN;
        int high=INT_MAX;
        return check(root,low,high);

    }
};
