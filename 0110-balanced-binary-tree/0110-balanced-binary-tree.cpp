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
    bool isBalanced(TreeNode* root) {
        return helper(root)>=0;
    }
    int helper(TreeNode* root){
        if(root==nullptr) return 0;
        int left = helper(root->left);
        int right = helper(root->right);
        if(left==-1 || right == -1 || abs(left-right)>1) return -1;
        return  max(left, right)+1;
    }
};