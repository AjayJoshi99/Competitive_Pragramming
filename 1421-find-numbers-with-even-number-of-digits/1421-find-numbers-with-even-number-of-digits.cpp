class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int num : nums){
            if(helper(num)) ans++;
        }
        return ans;
    }
    bool helper(int num){
        int count = 0; 
        while(num){
            count++;
            num/=10;
        }
        return count&1?0:1;
    }
};