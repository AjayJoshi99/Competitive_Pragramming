class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
       unordered_map<int, int> ball; 
        unordered_map<int, int> colorCount;
        vector<int> ans;

        for (auto& q : queries) {
            int x = q[0], y = q[1];

            if (ball.find(x) != ball.end()) {
                int oldColor = ball[x];
                colorCount[oldColor]--;
                if (colorCount[oldColor] == 0) colorCount.erase(oldColor);
            }

            ball[x] = y;
            colorCount[y]++;

            ans.push_back(colorCount.size());
        }
        return ans;
    }
};