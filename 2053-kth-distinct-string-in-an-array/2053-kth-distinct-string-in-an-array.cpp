class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> m;
        for(string str:arr){
            m[str]++;
        }
        k-=1;
        for(string str:arr){
            if(m[str]==1){ 
                if(k==0) return str;
                k--;
            }
        }
        return "";
        
    }
};