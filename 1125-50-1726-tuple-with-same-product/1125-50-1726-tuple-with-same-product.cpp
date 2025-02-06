class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int numsLength = nums.size();
        unordered_map<int, int> freq;
        int ans = 0;
        for (int i = 0; i < numsLength; i++) {
            for (int j = i + 1; j < numsLength; j++) {
                freq[nums[i] * nums[j]]++;
            }
        }

        for (auto [productValue, productFrequency] : freq) {
            int pairsOfEqualProduct = (productFrequency - 1) * productFrequency / 2;
            ans += 8 * pairsOfEqualProduct;
        }

        return ans;
    }
};