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
    vector<int> getKClosest(Node* root, int target, int k) {
        vector<pair<int,int>> vec; 
        helper(root, vec, target);

        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            if(a.second == b.second) return a.first < b.first;
            return a.second < b.second;
        });
        vector<int> ans;
        for (int i = 0; i < k && i < vec.size(); i++) {
            ans.push_back(vec[i].first);
        }

        return ans;
    }
    
private:
    void helper(Node* node, vector<pair<int,int>> &vec, int target) {
        if (node != nullptr) {
            helper(node->left, vec, target);
            vec.push_back({node->data, abs(node->data - target)});
            helper(node->right, vec, target);
        }
    }
};
