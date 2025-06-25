class Solution {
public:
    int findComplement(int num) {
        int i = floor(log2(num)) + 1, temp = 1;
        int x = pow(2,i)-1;
        return x^num;
       
    }
};