class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        map<int, int> freq;
        vector<int> ans;
        for(int i : digits){
            freq[i]+=1;
        }
        for(int i = 100; i<1000; i++){
            if((i&1)==1) continue;
            int a = i%10, b = (i/10)%10, c = (i/100)%10;
            map<int, int> temp;
            temp[a]+=1;temp[b]+=1;temp[c]+=1;
            if(temp[a]<=freq[a] && temp[b]<=freq[b]&& temp[c]<=freq[c]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};