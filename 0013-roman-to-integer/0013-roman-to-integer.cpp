class Solution {
public:
    int romanToInt(string s) {
        map<char , int> m = {{'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500},{'M',1000}};
        int ans = 0, i = 0;
        for(i = 0; i<s.size()-1; i++){
            if(m[s[i]]>=m[s[i+1]]){
                ans+=m[s[i]];
            }else{
                ans += (m[s[i+1]]-m[s[i]]);
                i++;
            }
        }
        if(i<s.size()){
            ans+=m[s[i]];
        }
        return ans;
    }
};