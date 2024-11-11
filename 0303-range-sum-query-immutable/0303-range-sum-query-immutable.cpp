class NumArray {
public:
    vector<int> n;
    NumArray(vector<int>& nums) {
        for(int val :nums){
            n.push_back(val);
        }
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        while(left<=right){
            sum+=n[left++];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */