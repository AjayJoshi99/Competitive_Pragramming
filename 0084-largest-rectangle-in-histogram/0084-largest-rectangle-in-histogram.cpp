class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size(), mx = 0;
        vector<int> left(n), right(n);
        stack<int> s;

        for(int i = 0; i < n; i++) {
            while(!s.empty() && heights[s.top()] >= heights[i]) s.pop();
            left[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }

        while(!s.empty()) s.pop();

        for(int i = n - 1; i >= 0; i--) {
            while(!s.empty() && heights[s.top()] >= heights[i]) s.pop();
            right[i] = s.empty() ? n : s.top();
            s.push(i);
        }

        for(int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;
            int area = width * heights[i];
            mx = max(mx, area);
        }

        return mx;
    }
};
