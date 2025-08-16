class Solution {
  public:
    string findLargest(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end(), [](const int &a, const int &b){
            string s1 = to_string(a);
            string s2 = to_string(b);
            return s1 + s2 > s2 + s1;
        });
        
        string ans = "";
        for(int num : arr){
            ans += to_string(num);
        }
        if (ans[0] == '0') return "0";
        return ans;
    }
};