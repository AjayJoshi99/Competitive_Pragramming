//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isBalanced(string& s) {
       stack<char> stack;
       for( char c : s){
           if(c == '{' || c == '(' || c ==  '['){
               stack.push(c);
           }else{
               if(stack.size()==0) return false;
               char last = stack.top();
               stack.pop();
               if(c == ']' && last != '[') return false;
               else if( c == '}' && last != '{') return false;
               else if(c == ')' && last != '(') return false;
           }
       }
       if(stack.size()==0) return true;
       return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends