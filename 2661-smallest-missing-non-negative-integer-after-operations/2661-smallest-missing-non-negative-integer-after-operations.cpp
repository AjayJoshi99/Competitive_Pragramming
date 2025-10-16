class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int, int> count;

        for (int n : nums) {
            int mod = ((n % value) + value) % value; // ensure non-negative mod
            count[mod]++;
        }

        int i = 0;
        while (true) {
            int mod = i % value;
            if (count[mod] == 0) return i;
            count[mod]--;
            i++;
        }
    }

};