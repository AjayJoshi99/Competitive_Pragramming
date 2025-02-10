class Solution {
public:
    string clearDigits(string s) {
        deque<int> ans;
        for(int i=0; i<s.length(); i++){
            if(isdigit(s[i])){
                ans.pop_back();
            }else{
                ans.push_back(s[i]);
            }
        }
        string t = "";
        while(!ans.empty()){
            t += ans.front(); 
            ans.pop_front();
        }
        return t;
    }
};