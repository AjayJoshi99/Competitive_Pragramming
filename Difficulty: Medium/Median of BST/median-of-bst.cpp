/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int findMedian(Node* root) {
        vector<int> temp;
        helper(root, temp);
        int n = temp.size();
        return n&1? temp[(n+1)/2 - 1] : temp[n/2-1];
    }
    void helper(Node* node, vector<int> &v){
        if(node !=nullptr){
            helper(node->left, v);
            v.push_back(node->data);
            helper(node->right, v);
        }
    }
};