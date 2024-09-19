//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        int length = str.length();
        string ans = "";
        string temp = "";
        
        for(int i = length-1; i>=0; i--){
            if(str[i]!='.'){
                temp+=str[i];
            }
            else{
             reverse(temp.begin(),temp.end());
             ans+=temp;
             ans+='.';
             temp = "";
            }
        }
        reverse(temp.begin(),temp.end());
        ans+=temp;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends