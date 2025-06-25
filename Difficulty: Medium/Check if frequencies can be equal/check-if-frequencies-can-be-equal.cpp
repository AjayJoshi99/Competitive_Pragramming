class Solution {
  public:
    bool sameFreq(string& s) {
        map<char, int> m;
        map<int, int> freq;
        for(char c : s){
            m[c]++;
        }
        for(pair<char, int> p: m){
            freq[p.second]++;
        }
        if(freq.size() == 1)  
            return true;
            
        if(freq.size() == 2) {
            auto it = freq.begin();
            int freq1 = it->first;   
            int count1 = it->second; 
            it++;
            int freq2 = it->first;   
            int count2 = it->second; 
             
            if((freq1 == 1 && count1 == 1) || (freq2 == 1 && count2 == 1))  
                return true;

            if(abs(freq1 - freq2) == 1) {
                if((freq1 > freq2 && count1 == 1) || (freq2 > freq1 && count2 == 1)) {
                    return true;
                }
            }
        }

        return false;
    }
};