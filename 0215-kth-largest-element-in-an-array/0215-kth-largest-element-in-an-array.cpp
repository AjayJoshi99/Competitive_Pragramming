class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        if(n-k < k){
            k = n - k +1;
            priority_queue<int, vector<int>, greater<int>> pq;
            for(int n : nums){
                pq.push(n);
            }
            int ans = -1;
            while(k--){
                ans = pq.top();
                pq.pop();
            }
            return ans;
        }
        priority_queue<int> pq;
            for(int n : nums){
                pq.push(n);
            }
            int ans = -1;
            while(k--){
                ans = pq.top();
                pq.pop();
            }
            return ans;
    }
};