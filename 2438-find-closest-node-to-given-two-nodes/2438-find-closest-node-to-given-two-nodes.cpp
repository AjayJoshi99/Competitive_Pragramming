class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
    map<int, int> m1, m2;
    vector<bool> v(edges.size(), false);
    
    helper(edges, node1, v, m1);
    v.assign(edges.size(), false);
    helper(edges, node2, v, m2);

    int ans = -1;
    int minDist = INT_MAX;

    for (auto& [node, dist1] : m1) {
        if (m2.count(node)) {
            int dist2 = m2[node];
            int maxDist = max(dist1, dist2);
            if (maxDist < minDist || (maxDist == minDist && node < ans)) {
                minDist = maxDist;
                ans = node;
            }
        }
    }
    return ans;
}
void helper(vector<int>& edges, int i, vector<bool>& visited, map<int, int>& m) {
    int distance = 0;
    while (i != -1 && !visited[i]) {
        visited[i] = true;
        m[i] = distance++;
        i = edges[i];
    }
}
};