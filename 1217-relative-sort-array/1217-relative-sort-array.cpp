class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> m;
        vector<int> ans;
        for(int num : arr1){
            m[num]++;
        }
        for(int i : arr2){
            while(m[i]>0){
                ans.push_back(i);
                m[i]--;
            }
        }
        for(pair<int,int> p : m){
            int freq = p.second;
            while(freq>0){
                ans.push_back(p.first);
                freq--;
            }
        }
        return ans;
    }
};