class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        bool flag = false;
        if(num<0){
            flag = true;
            num*= -1;
        }
        string ans = "";
        while(num){
            ans = to_string(num%7) + ans;
            num/=7;
        }
        if(flag) ans = "-" + ans ;
        return ans;
    }
};