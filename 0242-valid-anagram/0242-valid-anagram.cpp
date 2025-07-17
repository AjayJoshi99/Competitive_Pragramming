class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> m1,m2;
        for(char c : s){
            m1[c]++;
        }
        for(char c : t){
            m2[c]++;
        }
        if(m1.size() != m2.size()) return false;
        for(pair<char,int> p: m1){
            if(p.second!=m2[p.first]) return false;
        }
        return true;
    }
};