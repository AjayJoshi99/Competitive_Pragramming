class Solution {
public:
    vector<int> prevSmaller(vector<int>& h) {
        int n = h.size();
        vector<int> prev(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && h[st.top()] >= h[i])
                st.pop();
            prev[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return prev;
    }

    vector<int> nextSmaller(vector<int>& h) {
        int n = h.size();
        vector<int> next(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && h[st.top()] >= h[i])
                st.pop();
            next[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return next;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) 
            return 0;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> height(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == '1')
                    height[i][j] = (i == 0 ? 1 : height[i-1][j] + 1);
                else
                    height[i][j] = 0;
            }
        }

        int maxArea = 0;

        for (int i = 0; i < n; i++) {
            vector<int>& h = height[i];

            vector<int> prev = prevSmaller(h);
            vector<int> next = nextSmaller(h);

            for (int j = 0; j < m; j++) {
                int width = next[j] - prev[j] - 1;
                int area = h[j] * width;
                maxArea = max(maxArea, area);
            }
        }

        return maxArea;
    }
};