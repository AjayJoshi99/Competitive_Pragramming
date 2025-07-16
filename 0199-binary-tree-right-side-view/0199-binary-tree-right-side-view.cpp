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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        helper(root, 0, ans);
        return ans;
    }
    void helper(TreeNode *root, int lvl, vector<int> &v){
        if(root ==  nullptr) return;
        if(lvl >= v.size()){
            v.push_back(root->val);
        }
        helper(root->right, lvl+1, v);
        helper(root->left, lvl+1, v);
    }
};