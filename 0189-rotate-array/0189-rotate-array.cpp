class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()<k){
            k = k%nums.size();
        }
        if(nums.size()!=k){
            vector<int> temp(k);
            int j =0, n = nums.size()-1;
            for(int i =n; i>n-k; i--){
                temp[j++]=nums[i];
            }
            for(int i = n-k; i>=0; i--){
                nums[i+k] = nums[i];
            }
            j=k-1;
            for(int i =0; i<k;i++){
                nums[i] = temp[j--];
            }
        }
    }
};