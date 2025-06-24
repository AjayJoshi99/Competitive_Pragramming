class Solution {
  public:

    vector<string> convert(int a, int b, int c, string d) {
        vector<string> ans;
        ans.push_back(binary(a));
        ans.push_back(decimal(b));
        ans.push_back(decimal_hex(c));
        ans.push_back(hex_decimal(d));
        return ans;
    }
    
    string binary(int a){
        string ans;
        while(a){
            ans = char((a % 2) + '0') + ans;
            a/=2;
        }
        return ans;
    }
    
    string decimal(int b){
        int ans = 0, t = 0;
        while(b){
            if(b%10){
                ans += pow(2, t);
            }
            b/=10;
            t++;
        }
        return to_string(ans);
    }
    
    string decimal_hex(int c) {
        if (c == 0) return "0";
        string hex = "";
        while (c > 0) {
            int rem = c % 16;
            if (rem < 10)
                hex = char('0' + rem) + hex;
            else
                hex = char('A' + rem - 10) + hex;
            c /= 16;
        }
        return hex;
    }
    
    string hex_decimal(string d){
        long long decimal = 0;
        int base = 1;
    
        for (int i = d.size() - 1; i >= 0; i--) {
            char ch = d[i];
            if (ch >= '0' && ch <= '9') {
                decimal += (ch - '0') * base;
            } else if (ch >= 'A' && ch <= 'F') {
                decimal += (ch - 'A' + 10) * base;
            } else if (ch >= 'a' && ch <= 'f') {
                decimal += (ch - 'a' + 10) * base;
            }
            base *= 16;
        }
        return to_string(decimal);
    }
    
};