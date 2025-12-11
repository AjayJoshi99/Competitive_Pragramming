class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        using T = pair<int, pair<int,int>>; 

        priority_queue<T, vector<T>, greater<T>> pq;

        int n1 = nums1.size(), n2 = nums2.size();

        for(int i = 0; i < n1 && i < k; i++) {
            pq.push({nums1[i] + nums2[0], {i, 0}});
        }
        vector<vector<int>> ans;
        while(k-- && !pq.empty()) {
            auto p = pq.top(); pq.pop();
            int i = p.second.first;
            int j = p.second.second;
            ans.push_back({nums1[i], nums2[j]});
            if(j + 1 < n2) {
                pq.push({nums1[i] + nums2[j+1], {i, j+1}});
            }
        }

        return ans;
    }
};
