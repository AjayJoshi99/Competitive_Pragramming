/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};*/

class Solution {
  public:
    void transformTree(Node *root) {
        vector<int> a;
        helper(root, a);
        map<int,int> m;
        int temp = 0;
        m.insert({a[a.size()-1],0});
        for(int i = a.size()-2; i>-1; i--){
            temp += a[i+1];
            m.insert({a[i],temp});
        }
        transform(root, m);
        
    }
    void transform(Node *node, map<int,int> &m){
        if(node != nullptr){
            transform(node->left, m);
            node->data = m[node->data];
            transform(node->right, m);
        }
    }
    void helper(Node *node, vector<int> &a){
        if(node != nullptr){
            helper(node->left, a);
            a.push_back(node->data);
            helper(node->right, a);
        }
    }
};