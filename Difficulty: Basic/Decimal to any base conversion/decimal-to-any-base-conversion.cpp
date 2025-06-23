// User function Template for C++
class Solution {
  public:
    string getNumber(int B, int N) {
        string ans = "";
        while(N){
            int rem = N%B;
            string temp = to_string(rem);
              switch(rem){
                case 10: temp="A";
                break;
                case 11: temp="B";
                break;
                case 12: temp="C";
                break;
                case 13: temp="D";
                break;
                case 14: temp="E";
                break;
                case 15: temp="F";
                break;
            }
            ans = temp +ans;
            N=N/B;
        }
        return ans;
    }
};