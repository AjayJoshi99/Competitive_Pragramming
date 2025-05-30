/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    int findMaxFork(Node* root, int k) {
        int ans = -1;
        helper(root,k,ans);
        return ans;
    }
    void helper(Node* node, int k, int &ans){
        if(node == nullptr) return;
        
        int data = node->data;
        if(data == k){
            ans = data; 
            return;
        }
        if(data>ans && data<k) ans = data;
        if(data<k) helper(node->right, k, ans);
        else if(data>k) helper(node->left, k, ans);
    }
};