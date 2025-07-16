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
        queue<TreeNode *> q;
        int ans ;
        vector<int> temp;
        q.push(root);
        q.push(nullptr);
        while(!q.empty()){
            TreeNode *node = q.front();
            q.pop();
            if(node==nullptr){
                ans = temp[0];
                temp.clear();
                if(!q.empty()){ q.push(nullptr);}
            }
            else{
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                temp.push_back(node->val);
            }
        }
        return ans;
    }
};