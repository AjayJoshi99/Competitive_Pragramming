class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0) return false;

        unordered_map<int, int> freq;
        for (int x : hand) freq[x]++;

        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto &p : freq) pq.push(p.first);

        while (!pq.empty()) {
            int start = pq.top(); 
            pq.pop();

            if (freq[start] == 0) continue; 
            for (int i = 1; i < groupSize; i++) {
                int card = start + i;
                if (freq[card] <= 0) return false;
                freq[card]-=freq[start];
            }
        }
        return true;
    }
};