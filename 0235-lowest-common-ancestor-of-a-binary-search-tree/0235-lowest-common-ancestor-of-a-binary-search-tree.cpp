/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode *ans = nullptr;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        helper(root, p->val, q->val);
        return ans;
    }

    bool helper(TreeNode *node, int p, int q){
        if(node == nullptr) return false;
        bool left = helper(node->left, p, q);
        bool right = helper(node->right, p, q);
        if( (left && right) || ((left || right) && (node->val == p || node->val == q))){
            ans = node;
            return false;
        }
        return left || right ||  node->val == p || node->val == q;
    }
};