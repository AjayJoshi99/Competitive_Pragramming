class Solution {
public:
    long long count;

    void mergeSort(vector<int>& a, int low, int high) {
        if (low >= high) return;

        int mid = low + (high - low) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }

    void merge(vector<int>& a, int low, int mid, int high) {
        vector<int> temp(high - low + 1);

        for (int i = low; i <= high; i++) {
            temp[i - low] = a[i];
        }

        int i = 0;                  
        int j = mid - low + 1;      
        int k = low;

        while (i <= mid - low && j <= high - low) {
            if (temp[i] <= temp[j]) {
                a[k++] = temp[i++];
            } else {
                count += (mid - low + 1 - i); 
                a[k++] = temp[j++];
            }
        }

        while (i <= mid - low) {
            a[k++] = temp[i++];
        }
    }

    long long inversionCount(vector<int>& arr) {
        count = 0;
        mergeSort(arr, 0, arr.size() - 1);
        return count;
    }
};
