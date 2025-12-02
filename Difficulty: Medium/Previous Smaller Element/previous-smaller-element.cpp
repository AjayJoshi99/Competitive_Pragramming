class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        vector<int> ans(arr.size(), -1);
        stack<int> s;
        
        for(int i = 0; i<arr.size(); i++){
            while(!s.empty() && arr[i]<=s.top()){
                s.pop();
            }
            if(!s.empty()) ans[i] = s.top();
            s.push(arr[i]);
        }
        return ans;
        
    }
};