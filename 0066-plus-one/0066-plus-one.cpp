class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        int pre_carry=1;
        for(int i =0; i<digits.size(); i++){
            digits[i]+=pre_carry;
            if(digits[i]>9){
                pre_carry = digits[i]/10;
                digits[i] %=10;
            }else{
                pre_carry = 0;
            }
        }
        if(pre_carry != 0){
            digits.push_back(pre_carry);
        }
        reverse(digits.begin(),digits.end());
        return digits;
    }
};