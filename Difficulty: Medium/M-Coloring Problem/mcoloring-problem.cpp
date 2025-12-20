class Solution {
  public:
    bool graphColoring(int v, vector<vector<int>> &edges, int m) {
        vector<int> color(v, -1);
        return helper(v, edges, m, 0, color);
        
    }
  private :
    bool helper(int v, vector<vector<int>> &edges, int m, int node, vector<int> &color){
        if(node == v) return true;
        
        for(int i = 0; i<m; i++){
            if(possible(edges, color, node, i)){
                color[node] = i;
                if(helper(v, edges, m, node+1, color)) return true;
                color[node] = -1;
            }
        }
        return false;
        
    }
    
    bool possible(vector<vector<int>> &edges, vector<int> &color, int node, int c){
        for(vector<int> v : edges){
            if(v[0]==node && color[v[1]]==c) return false;
            if(v[1]==node && c==color[v[1]]) return false;
        }
        return true;
        
    }
};
