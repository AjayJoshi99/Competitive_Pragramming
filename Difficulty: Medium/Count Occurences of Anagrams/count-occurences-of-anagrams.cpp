//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        vector<int>hashCurr(26,0);
        vector<int>hashGiven(26,0);
        
        int n = txt.size();
        int i = 0;
        int j  = 0;
        int k = pat.length();
        int noOfAnagram = 0;
        
        for(auto elem : pat)
        {
            hashGiven[elem-'a']++;
        }
        
        while(j<n)
        {
            // calculation
            hashCurr[txt[j]-'a']++;
        
            if(j-i+1 < k) ++j;
            
            // window size hit
            else 
            {
                // conclusion
                if(hashCurr == hashGiven)
                {
                    noOfAnagram++;
                }
                // slide the window
                hashCurr[txt[i]-'a']--;
                ++i;
                ++j;
            }
        }
        
        return noOfAnagram;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends