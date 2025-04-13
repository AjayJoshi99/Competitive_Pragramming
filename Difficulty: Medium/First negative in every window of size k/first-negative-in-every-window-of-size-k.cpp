//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        vector<int> answer;
        queue<int> q;
        int i = 0, j = 0;
        for(; j<k; j++){
            if(arr[j]<0){
                q.push(arr[j]);
            }
        }
        j--;
        while(j<arr.size()){
            if(!q.empty()){
                answer.push_back(q.front());
                if(q.front()==arr[i]){
                    q.pop();
                }
            }else{
                answer.push_back(0);
            }
            i++;
            j++;
            if(arr[j]<0){
                q.push(arr[j]);
            }
        }
        return answer;
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
        vector<int> ans = ob.firstNegInt(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends