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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == nullptr) return ans;
        vector<int> temp;
        queue<TreeNode *> q;
        bool flag = false;
        q.push(root);
        q.push(nullptr);
        while(!q.empty()){
            TreeNode *node = q.front();
            q.pop();
            if(node == nullptr){
                if(flag){
                    reverse(temp.begin(), temp.end());
                }
                flag = !flag;
                ans.push_back(temp);
                temp.clear();
                if(!q.empty())q.push(nullptr);
            }else{
                temp.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        return ans;
    }
};