class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        vector<int> f(arr.size(),-1);
        for(int val : arr){
            m[val]++;
        }
        for(pair<int,int> row:m){
            if(f[row.second-1]!=-1) return false;
            f[row.second-1] = row.second;
        }
        return true;
        
    }
};