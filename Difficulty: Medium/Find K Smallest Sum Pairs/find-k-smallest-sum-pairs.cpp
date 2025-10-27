class Solution {
  public:
    vector<vector<int>> kSmallestPair(vector<int> &arr1, vector<int> &arr2, int k) {
       vector<vector<int>> ans;
    if (arr1.empty() || arr2.empty()) return ans;

    // Min-heap storing {sum, i, j}
    priority_queue<vector<int>, vector<vector<int>>, greater<>> minHeap;

    // Push the first element of arr2 with every element of arr1 (initial pairs)
    for (int i = 0; i < arr1.size() && i < k; i++) {
        minHeap.push({arr1[i] + arr2[0], i, 0});
    }

    while (k-- > 0 && !minHeap.empty()) {
        auto top = minHeap.top();
        minHeap.pop();
        int i = top[1], j = top[2];
        ans.push_back({arr1[i], arr2[j]});

        // Push next pair from arr2
        if (j + 1 < arr2.size()) {
            minHeap.push({arr1[i] + arr2[j + 1], i, j + 1});
        }
    }

    return ans;
        
    }
};
