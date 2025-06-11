class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius) {
        stack<pair<int,int>> s;
        int n = color.size();
        
        for(int i = 0; i < n; i++) {
            pair<int,int> current = {color[i], radius[i]};
            if(!s.empty() && s.top() == current) {
                s.pop();  
            } else {
                s.push(current);
            }
        }
        return s.size();
    }
};