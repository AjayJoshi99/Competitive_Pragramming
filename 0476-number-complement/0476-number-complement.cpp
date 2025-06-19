class Solution {
public:
    int findComplement(int num) {
        int i = floor(log2(num)) + 1, temp = 1;
        while(i--){
            num = num^temp;
            temp <<= 1;
        }
        return num;
    }
};