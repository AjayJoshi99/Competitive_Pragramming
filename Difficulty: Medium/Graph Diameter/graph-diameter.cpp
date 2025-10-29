class Solution {
  public:
    int diameter(int V, vector<vector<int>>& edges) {
        vector<vector<int>> e(V);
        int start = 0;
        for(vector<int> v : edges){
            e[v[0]].push_back(v[1]);
            e[v[1]].push_back(v[0]);
        }
        bfs(start, e);
        return bfs(start, e);
    }
    int bfs(int &v, vector<vector<int>> &e){
        vector<int> dist(e.size(),-1);
        queue<int> q;
        q.push(v);
        dist[v] = 0;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(int i : e[curr]){
                if(dist[i] == -1){
                    dist[i] = dist[curr]+1;
                    q.push(i);
                }
            }
        }
        int mx = 0;
        for(int i = 0; i<dist.size(); i++){
            if(dist[i]>mx){
                mx = dist[i];
                v = i;
            }
        }
        return mx;
    }
};
