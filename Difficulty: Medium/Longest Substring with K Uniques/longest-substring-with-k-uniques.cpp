//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
    int n = s.size();
    if (n == 0 || k == 0) return -1;

    vector<int> freq(26, 0);
    int i = 0, j = 0, unq = 0, maxLen = -1;

    while (j < n) {
        if (freq[s[j] - 'a'] == 0) unq++;
        freq[s[j] - 'a']++;

        while (unq > k) {
            freq[s[i] - 'a']--;
            if (freq[s[i] - 'a'] == 0) unq--;
            i++;
        }
        if (unq == k) {
            maxLen = max(maxLen, j - i + 1);
        }
        j++;
    }

    return maxLen;
}

};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends