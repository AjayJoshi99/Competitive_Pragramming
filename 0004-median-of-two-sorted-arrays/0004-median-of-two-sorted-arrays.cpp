class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size(), n2 = nums2.size();
    int n = n1 + n2;

    int i = 0, j = 0;
    int prev = -1, curr = -1;

    for(int k = 0; k <= n/2; k++) {
        prev = curr;

        if(i < n1 && (j >= n2 || nums1[i] < nums2[j])) {
            curr = nums1[i];
            i++;
        } else {
            curr = nums2[j];
            j++;
        }
    }

    if(n % 2 == 1){
        return curr;               
    } else {
        return (prev + curr) / 2.0; 
    }
}
};