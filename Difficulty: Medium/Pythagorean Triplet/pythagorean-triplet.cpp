class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
         set<int> sets;
        for(int i = 0; i < arr.size(); i++) {
            sets.insert(arr[i] * arr[i]);
        }
        for(int a : sets) {
            for(int b : sets) {
                if(sets.find(a + b) != sets.end()) return true;
            }
        }
        return false;
        
    }
};