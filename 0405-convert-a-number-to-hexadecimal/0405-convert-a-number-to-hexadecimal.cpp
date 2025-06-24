class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        string temp = "0123456789abcdef";
        string ans = "";
        unsigned int n = num; 
        while (n) {
            ans = temp[n % 16] + ans;
            n /= 16;
        }
        return ans;
    }
};