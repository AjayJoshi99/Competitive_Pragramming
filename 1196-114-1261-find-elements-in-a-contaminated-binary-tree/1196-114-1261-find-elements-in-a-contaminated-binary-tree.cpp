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
class FindElements {
public:
    unordered_set<int> v;
    FindElements(TreeNode* root) {
        root->val = 0;
        v.insert(0);
        helper(root);
    }
    void helper(TreeNode* root){
        if(root->left != nullptr){
            root->left->val = root->val * 2 + 1;
            helper(root->left);
            v.insert(root->left->val);
        }
        if(root->right != nullptr){
            root->right->val = root->val * 2 + 2;
            helper(root->right);
            v.insert(root->right->val);
        }
    }
    
    bool find(int target) {
        return std::find(v.begin(), v.end(), target) != v.end() ? true : false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
