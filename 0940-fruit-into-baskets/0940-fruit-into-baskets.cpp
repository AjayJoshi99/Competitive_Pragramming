class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans = 0, left = 0, right = 0;
        map<int,int> m;
        while(right<fruits.size()){
            m[fruits[right]]++;
            if(m.size()<3) ans = max(ans, right-left+1);
            else{
                m[fruits[left]]--;
                if(m[fruits[left]]==0) m.erase(fruits[left]);
                left++;
            }
            right++;
        }
        return ans;
    }
};