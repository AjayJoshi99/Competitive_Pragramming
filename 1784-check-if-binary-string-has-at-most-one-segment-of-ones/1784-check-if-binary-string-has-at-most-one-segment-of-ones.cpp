class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.size()== 1 && s[0] == '1') return true;
        int segments = 0;
        bool flag = false;
        for(int i = 0; i<s.size(); i++){
           if(s[i] == '1'){
            flag = true;
           }else if(flag){
            flag = false;
            segments++;
           }
        }
        if(flag) segments++;
        return segments == 1;
    }
};