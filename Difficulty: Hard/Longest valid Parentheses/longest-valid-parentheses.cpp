//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     int maxLength(string &s) {
       int n=s.length();
       int l=0;
       int r=0;
       int maxi=0;
       for(int  i=0;i<n;i++)
       {
           if(s[i]=='(')
           l++;
           if(s[i]==')')
           r++;
           if(l==r)
           maxi= max(maxi,2*l);
           if(r>l)
           {
               l=0;
               r=0;
           }
       }
       r=0;
       l=0;
       for(int i=n-1;i>=0;i--)
       {
           if(s[i]=='(')
           l++;
           if(s[i]==')')
           r++;
           if(l==r)
           maxi=max(maxi,2*l);
           if(r<l)
           {
               l=0;
               r=0;
           }
       }
       return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends