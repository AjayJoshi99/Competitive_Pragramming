/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    vector<int> leftView(Node *root) {
        vector<int> ans;
        helper(root, 0, ans);
        return ans;
    }
    
    void helper(Node *root, int lvl, vector<int> &v){
        if(root ==  nullptr) return;
        if(lvl >= v.size()){
            v.push_back(root->data);
        }
        helper(root->left, lvl+1, v);
        helper(root->right, lvl+1, v);
    }
};