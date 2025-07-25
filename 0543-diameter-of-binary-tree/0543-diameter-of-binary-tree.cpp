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
    int ans = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
        return ans;
    }
    int helper(TreeNode *node){
        if(node == nullptr) return 0;
        int left = helper(node->left);
        int right = helper(node->right);
        ans = max(ans, left+right);
        return max(left, right)+1;
    }
};