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
    int findBottomLeftValue(TreeNode* root) {
        int  ans = 0, lvl = -1;
        helper(root, lvl, ans, 0);
        return ans;
    }
    void helper(TreeNode* root, int &lvl, int &ans, int curr){
        if(root == nullptr) return;
        if(lvl<curr){
            lvl = curr;
            ans = root->val;
        }
        helper(root->left, lvl, ans, curr+1);
        helper(root->right, lvl, ans, curr+1);
    }
};