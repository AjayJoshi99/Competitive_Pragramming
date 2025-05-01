//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<vector<int>> v;
        vector<int> temp; temp.push_back(1);
        if(n==1) return temp;
        v.push_back(temp);
        for(int i = 1; i<n; i++){
            temp.clear();
            for(int j = 0; j<=i; j++){
                if(j==0 || j==i){
                    temp.push_back(1);
                }else{
                    temp.push_back(v[i-1][j]+v[i-1][j-1]);
                }
            }
            v.push_back(temp);
        }
        return temp;
        
    }
};



//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);

        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends