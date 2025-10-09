/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> postOrder(Node* root) {
        vector<int> ans;
        helper(root, ans);
        return ans;
    }
    void helper(Node *node, vector<int> &ans){
        if(node != nullptr){
            helper(node->left, ans);
            helper(node->right, ans);
            ans.push_back(node->data);
        }
    }
};