//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        int i = 0, j = 0, maxSum = 0, tempSum = 0;
        
        while(j<k){
            tempSum += arr[j++];
        }
        
        while(j<arr.size()){
            maxSum = max(maxSum, tempSum);
            tempSum = tempSum -arr[i++] + arr[j++];
        }
        maxSum = max(maxSum, tempSum);
        return maxSum;
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends