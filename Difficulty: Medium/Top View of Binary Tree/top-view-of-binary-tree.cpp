/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        queue<pair<int, Node *>> q;
        map<int,Node *> m;
        vector<int> ans;
        q.push({0, root});
        while(!q.empty()){
            pair<int, Node *> p = q.front();
            q.pop();
            if(m.count(p.first)==0){
                m[p.first] = p.second;
            }
            if(p.second->left){
                q.push({p.first-1, p.second->left});
            }
            if(p.second->right){
                q.push({p.first+1, p.second->right});
            }
        }
        for(pair<int, Node*> p : m){
            ans.push_back(p.second->data);
        }
        return ans;
    }
    
};