// User function template for C++
class Solution {
  public:
    string addBinary(string& a, string& b) {
        string ans = "";
        int i = a.size()-1, j = b.size()-1, carry = 0;
        int s1 = helper(a), s2 = helper(b);
        while(i>=s1 && j >=s2){
            if(a[i] == '1' && b[j] == '1'){
                if(carry) ans = "1" + ans;
                else{
                    ans = "0" + ans;
                    carry = 1;
                }
                
            }else if(a[i]=='1'|| b[j] == '1'){
                if(carry){
                    ans = "0" + ans;
                    carry = 1;
                }else  ans = "1" + ans;
            }else{
                if(carry){ ans = "1" + ans; carry = 0;}
                else  ans = "0" + ans;
            }
            i--;
            j--;
        }
        while(i>=s1){
            if(carry){
                if(a[i]=='1'){
                    ans = '0' + ans;
                }else{
                    ans = '1' + ans;
                    carry = 0;
                }
            }else{
                ans = a[i] + ans;
            }
            i--;
        }
        while(j>=s2){
            if(carry){
                if(b[j]=='1'){
                    ans = '0' + ans;
                }else{
                    ans = '1' + ans;
                    carry = 0;
                }
            }else{
                ans = b[j] + ans;
            }
            j--;
        }
        if(carry) ans = '1' + ans;
        return ans;
        
    }
    
    int helper(string a){
        int i = 0;
        for(char c : a){
            if(c=='1') return i;
            i++;
        }
    }
};