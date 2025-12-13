class Solution {
public:
    struct cmp{
         bool operator()(pair<int,int> &a, pair<int,int> &b){
            if(a.second==b.second && a.first<b.first) return true; 
            return a.second > b.second;
        }
    };
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int n : nums){
            m[n]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;
        for(auto p : m){
            pq.push(p);
        }
        vector<int> ans; 
        while(!pq.empty()){
            auto [val, freq] = pq.top(); pq.pop();
            while(freq--){
                ans.push_back(val);
            }
        }
        return ans; 
    }
};