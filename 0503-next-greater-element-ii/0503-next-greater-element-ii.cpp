class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size(), m = nums.size(), count = 0;
        vector<int> v(n);
        stack<int> s;
        n*=2;
        for(int i = 0; i<n; i++){
            while(!s.empty() && nums[i%m]>nums[s.top()]){
                v[s.top()] = nums[i%m];
                s.pop();
            }
            if (i < m) s.push(i);
        }
        while(!s.empty()){
            v[s.top()] = -1;
            s.pop();
        }
        return v;
    }
};