class Solution {
  public:
    int minCost(vector<int>& arr) {
        if(arr.size() == 1) return 0;
        int cost = 0, i = arr.size()-1;
        priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
        
        while(i--){
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();
            int temp = a+b;
            pq.push(temp);
            cost += temp;
        }
        return cost;
        
    }
};