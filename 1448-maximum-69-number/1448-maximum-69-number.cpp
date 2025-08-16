class Solution {
public:
    int maximum69Number (int num) {
        int n = num, idx = -1, temp = -1;
        while(n){
            temp++;
            if(n%10 == 6) idx=temp;
            n/=10;
        }
        if(idx == -1) return num;
        return num + 3*(pow(10,idx));
    }
};