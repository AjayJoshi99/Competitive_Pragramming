class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return helper(nums, k) - helper(nums, k - 1);
    }

    int helper(vector<int>& n, int k){
        if (k < 0) return 0;
        int left = 0, ans = 0, odd = 0;

        for (int right = 0; right < n.size(); right++) {
            if ((n[right] & 1) == 1) odd++;

            while (odd > k) {
                if ((n[left] & 1) == 1) odd--;
                left++;
            }

            ans += right - left + 1;
        }

        return ans;
    }
};