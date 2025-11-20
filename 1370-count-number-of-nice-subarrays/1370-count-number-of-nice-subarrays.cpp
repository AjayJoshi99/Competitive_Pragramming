class Solution {
public:
    int numberOfSubarrays(vector<int>& n, int k) {
        int left = 0, ans = 0, odd = 0, curr = 0;
        for (int right = 0; right < n.size(); right++) {
            if ((n[right] & 1) == 1){ 
                odd++;
                curr = 0;
                }

            while (odd == k) {
                if ((n[left] & 1) == 1) odd--;
                left++;
                curr++;
            }

            ans += curr;
        }

        return ans;
    }
};