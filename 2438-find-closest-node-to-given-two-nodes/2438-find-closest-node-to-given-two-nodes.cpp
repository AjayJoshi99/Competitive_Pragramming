class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
    int n = edges.size();
    vector<int> dist1(n, -1), dist2(n, -1);

    dfs(edges, node1, dist1);
    dfs(edges, node2, dist2);

    int ans = -1;
    int minDist = INT_MAX;

    for (int i = 0; i < n; ++i) {
        if (dist1[i] != -1 && dist2[i] != -1) {
            int maxDist = max(dist1[i], dist2[i]);
            if (maxDist < minDist || (maxDist == minDist && i < ans)) {
                minDist = maxDist;
                ans = i;
            }
        }
    }
    return ans;
}
void dfs(vector<int>& edges, int start, vector<int>& dist) {
    int d = 0;
    while (start != -1 && dist[start] == -1) {
        dist[start] = d++;
        start = edges[start];
    }
}
};