/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution {
  public:
    // Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root) {
        vector<int> ans;
        helper(root, 0, ans);
        return ans;
        
    }
     void helper(Node *root, int lvl, vector<int> &v){
        if(root ==  nullptr) return;
        if(lvl >= v.size()){
            v.push_back(root->data);
        }
        helper(root->right, lvl+1, v);
        helper(root->left, lvl+1, v);
    }
};