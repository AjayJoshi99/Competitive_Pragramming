//{ Driver Code Starts
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findMean(vector<int>& arr, vector<int>& q) {
        vector<int> ans(q.size()/2);
        for(int i = 1; i<arr.size(); i++){
            arr[i]+=arr[i-1];
        }
        int j = 0;
        for(int i = 0; i<q.size(); i+=2){
            if(q[i]!= 0){
                ans[j++] = (arr[q[i+1]]-arr[q[i]-1])/(q[i+1]-q[i]+1);
            }else{
                ans[j++] = arr[q[i+1]]/(q[i+1]-q[i]+1);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
/* Driver program to test above function */
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {

        vector<int> arr, q;
        string input1;
        getline(cin, input1);
        stringstream ss(input1);
        int number1;
        while (ss >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream sss(input2);
        int number2;
        while (sss >> number2) {
            q.push_back(number2);
        }
        Solution ob;
        // Function calling
        vector<int> v;
        v = ob.findMean(arr, q);

        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        cout << endl;
        // cout << "~" << endl;
        // string tilde;
        // getline(cin, tilde);
    }

    return 0;
}

// } Driver Code Ends