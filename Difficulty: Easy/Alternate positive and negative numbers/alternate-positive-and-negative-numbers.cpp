//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        vector<int>v1,v2;
        for(int i=0;i<arr.size();i++){
          if(arr[i]>=0){
              v1.push_back(arr[i]);
          }else{
              v2.push_back(arr[i]);
          }
        }
        int i=0,j=0,k=0,s=0;
        while((i<v1.size()) && (j<v2.size())){
            if(s==0){
                arr[k] = v1[i];
                i++;
                s=1;
            }else if(s==1){
                arr[k] = v2[j];
                j++;
                s=0;
            }
                 k++;
        }
        while(i<v1.size()){
            arr[k] = v1[i];
            k++;
            i++;
        }
        while(j<v2.size()){
            arr[k] = v2[j];
            j++;
            k++;
        }
 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends