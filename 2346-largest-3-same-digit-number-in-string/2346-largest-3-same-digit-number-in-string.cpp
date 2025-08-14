class Solution {
public:
    string largestGoodInteger(string num) {
        int mx = -1, i = 0;
        map<char, int> m = {
            {'1',1}, {'2',2},{'3',3}, {'4',4},{'5',5},{'6',6},{'7',7},{'8',8},{'9',9},{'0',0}
        };
        while(i<num.size()){
            if(m[num[i]]>mx && i+2<num.size()){
                if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                    i+=2;
                    mx = m[num[i]];
                }
            }
            i++;
        }
        if(mx == -1) return "";
        string ans = to_string(mx);
        return ans+ans+ans;
    }
};