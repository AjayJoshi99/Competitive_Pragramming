class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums, k) - helper(nums, k-1);
    }

    int helper(vector<int>& n, int k){
        if(k<=0) return 0;
        int left = 0, right = 0, ans = 0;
        map<int,int> m;
        while(right<n.size()){
            m[n[right]]++;

            while(m.size()>k){
                if(m[n[left]]==1) m.erase(n[left]);
                else m[n[left]]--;
                left++;
            }
            if(m.size()<=k) ans += right-left+1;
            right++;
        }
        return ans;
    }
};