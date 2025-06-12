class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) { //T.C --> O(n) k = 3      S.C --> O(n) k = 2
        int n = nums.size();
        int temp = nums[n-1]; 
        vector<int> result(n, 1);

        for(int i = 1; i < n; i++){
            result[i] = result[i - 1] * nums[i - 1];
        }

        for(int i = n - 2; i >= 0; i--){
            result[i] *= temp;
            temp*=nums[i];
        }

        return result;
    }
};