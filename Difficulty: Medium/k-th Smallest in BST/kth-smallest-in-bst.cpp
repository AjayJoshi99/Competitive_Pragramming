/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  int ans = -1;
    int kthSmallest(Node *root, int k) {
        int count=k;
        helper(root, &count);
        return ans;
        
    }
     void helper(Node *node, int *count){
         if(node != nullptr){
             helper(node->left, count);
             *count = *count -1;
             if(*count==0){
                this->ans = node->data;
                return ;
             }
             helper(node->right, count);
         }
     }
};