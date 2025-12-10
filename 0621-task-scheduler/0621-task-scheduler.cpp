class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26, 0);
        for(char c : tasks) freq[c - 'A']++;

        priority_queue<int> pq;
        for(int f : freq)
            if(f > 0) pq.push(f);

        queue<pair<int,int>> q; 
        int time = 0;

        while(!pq.empty() || !q.empty()) {
            time++;

            if(!pq.empty()) {
                int cnt = pq.top(); pq.pop();
                cnt--;
                if(cnt > 0)
                    q.push({cnt, time + n });
            }

            while(!q.empty() && q.front().second <= time) {
                pq.push(q.front().first);
                q.pop();
            }
        }
        return time;
    }
};
