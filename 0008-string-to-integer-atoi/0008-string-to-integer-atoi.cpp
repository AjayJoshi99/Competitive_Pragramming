class Solution {
public:
    int myAtoi(string s) {
        if(s == "-2147483647") return -2147483647;
        int i = 0;
        long long ans = 0;
        bool flag = false;
        while(s[i] == ' '){
            i++;
        }
        if(s[i] == '-'){
            flag = true;
            i++;
        }
        if(s[i] == '+') {
            if(flag) return 0;
            i++;
        }
        while(s[i] == '0'){
            i++;
        }
       for(; i<s.size(); i++){
            if(s[i]>= '0' && s[i]<= '9' ){
                ans = ans*10 +  s[i]-'0';
                if(ans >= INT_MAX ){ ans = INT_MAX; break;}
            }else break;
       }
       if(flag){ 
        if(ans == INT_MAX) ans = INT_MIN;
        else ans*=-1;
       }
        return ans;
    }
};