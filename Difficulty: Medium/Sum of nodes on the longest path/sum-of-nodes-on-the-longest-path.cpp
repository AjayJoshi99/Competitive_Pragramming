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
    int sumOfLongRootToLeafPath(Node *root) {
        int pathLen = 0, pathSum = 0;
        helper(root, 0, 0, pathLen, pathSum);
        return pathSum;
    }

    void helper(Node* node, int l, int s, int &pathLen, int &pathSum){
        if (node == NULL) return;

        s += node->data;
        l += 1;

        if(node->left == NULL && node->right == NULL){
            if(l > pathLen){
                pathLen = l;
                pathSum = s;
            } else if(l == pathLen){
                pathSum = max(pathSum, s);
            }
        } else {
            helper(node->left, l, s, pathLen, pathSum);
            helper(node->right, l, s, pathLen, pathSum);
        }
    }
};
