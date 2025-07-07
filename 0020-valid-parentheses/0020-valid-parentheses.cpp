class Solution {
public:
    bool isValid(string s) {
        stack<int> t;
        for(char c : s){
            if(c=='[' || c == '{' || c == '('){
                t.push(c);
            }else{
                if(t.empty()) return false;
                char a = t.top();
                t.pop();
                if((c==')' && a == '(')|| (c=='}' && a == '{') ||  (c==']' && a == '[')) continue;
                return false;
            }
        }   
        if(t.empty()) return true;
        return false;
    }
};