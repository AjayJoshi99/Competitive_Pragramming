class Solution {
  public:
    double minMaxDist(vector<int> &stations, int K) {
         if(stations.size() < 2) {
            return 0.0;
        }
        priority_queue<pair<double,int>> p;
        vector<int> gas(stations.size()-1,0);
        
        for(int i = 0; i<stations.size()-1; i++){
            p.push({(double)(stations[i+1]-stations[i]), i});
        }
        
        for(int i = 0; i<K; i++){
            pair<double,int> t = p.top(); 
            p.pop();
            int idx = t.second;
            gas[idx]++;   
    
            double d = stations[idx+1] - stations[idx];
            double newDist = d / (gas[idx] + 1);
    
            p.push({newDist, idx});
            
        }
        return p.top().first;
        
    }
};