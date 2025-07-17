class Solution {
public:
    string reverseWords(string s) {
        string ans = "", temp = "";
        for(int i  = s.size()-1; i>-1; i--){
            if(s[i] != ' '){
                temp = s[i]+temp;
            }else{
                if(temp.size()!=0) ans += " " + temp;
                temp.clear();
            }
        }
        if(temp.size()!=0) ans += " " + temp;
        ans = ans.substr(1, ans.size()-1);
        return ans;
    }
};