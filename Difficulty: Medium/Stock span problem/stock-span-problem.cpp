class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        stack<int> s;
        vector<int> ans(arr.size());
        for(int i =0; i<arr.size(); i++){
            while(!s.empty() &&  arr[s.top()]<=arr[i]){
                s.pop();
            }
            ans[i] = !s.empty() ? i-s.top() : i+1;
            s.push(i);
        }
        return ans;
    }
};