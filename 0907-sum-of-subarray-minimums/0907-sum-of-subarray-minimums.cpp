class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> prev = prevSmall(arr), next = nextSmall(arr);
        long long count = 0, mod = 1000000007;

        for(int i = 0; i < arr.size(); i++){
            long long left = i - prev[i];
            long long right = next[i] - i;
            count = (count + (left * right % mod) * arr[i]) % mod;
        }
        return count;
    }

private:
    vector<int> prevSmall(vector<int> &v){
        int n = v.size();
        vector<int> p(n);
        stack<int> s;

        for(int i = 0; i < n; i++){
            while(!s.empty() && v[i] < v[s.top()])
                s.pop();
            p[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }
        return p;
    }
    vector<int> nextSmall(vector<int> &v){
        int n = v.size();
        vector<int> nxt(n);
        stack<int> s;

        for(int i = n - 1; i >= 0; i--){
            while(!s.empty() && v[i] <= v[s.top()]) 
                s.pop();
            nxt[i] = s.empty() ? n : s.top();
            s.push(i);
        }
        return nxt;
    }
};