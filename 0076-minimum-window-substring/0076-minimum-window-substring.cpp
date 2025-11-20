class Solution {
public:
   string minWindow(string s, string t) {
        int left = 0, right = 0;
        int st = -1, end = -1;
        int mnlen = 1000000;
        int count = 0;

        vector<int> v(128, 0); 
        for(char c : t){
            v[c]++;
        }

        while(right < s.size()){
            if(v[s[right]] > 0)
                count++;

            v[s[right]]--;  
            

            while(count == t.size()){
                if(mnlen > right - left + 1){
                    mnlen = right - left + 1;
                    st = left;
                    end = right;
                }
                v[s[left]]++; 
                if(v[s[left]] > 0)  
                    count--;
                left++;
            }

            right++;
        }

        if(st == -1) return "";
        return s.substr(st, end - st + 1);
}

};