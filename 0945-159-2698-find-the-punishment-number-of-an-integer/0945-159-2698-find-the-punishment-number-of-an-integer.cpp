class Solution {
public:
    bool func(string sq, int target) {
        if (sq == "" && target == 0) return true;
        if (target < 0) return false;
        bool ans = false;
        for (int i = 0; i < sq.size(); i++) {
            string left = sq.substr(0, i + 1);
            string right = sq.substr(i + 1);

            int lef = stoi(left);
            if (func(right, target - lef)) {
                ans = true;
                break;
            }
        }
        return ans;
    }

    int punishmentNumber(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            int sq = i * i;
            if (func(to_string(sq), i)) {
                sum += (i * i);
            }
        }
        return sum;
    }
};
