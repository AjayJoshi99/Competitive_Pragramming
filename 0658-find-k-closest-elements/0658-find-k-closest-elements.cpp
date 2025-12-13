#define p pair<int,int> 
class Solution {
    struct cmp{
        bool operator()(const p &a, const p &b){
            if(a.second==b.second) return a.first < b.first;;
            return a.second < b.second; 
        }
    };
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<p, vector<p>, cmp> pq;
        vector<int> ans(k);

        for(int n : arr){
            pq.push({n, abs(n-x)});
            if(pq.size()==k+1) pq.pop();
        }

        while(--k>-1){
            ans[k] = pq.top().first; pq.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};