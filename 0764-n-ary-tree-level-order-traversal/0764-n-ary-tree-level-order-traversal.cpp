/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root == nullptr) return {};
        vector<vector<int>> ans;
        vector<int> temp;
        queue<Node *> q;
        q.push(root);
        q.push(nullptr);
        while(!q.empty()){
            Node *node = q.front();
            q.pop();
            if(node == nullptr){
                ans.push_back(temp);
                temp.clear();
                if(!q.empty()) q.push(nullptr);
            }else{
                for(Node *ptr : node->children){
                    q.push(ptr);
                }
                temp.push_back(node->val);
            }
        }
        return ans;
    }
};