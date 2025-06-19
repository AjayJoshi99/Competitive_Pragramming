class Solution {
  public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(vector<int>& arr, int low, int high) {
        if(low<high){
            int mid = partition(arr,low,high);
            quickSort(arr, low, mid - 1);
            quickSort(arr, mid+1, high);
        }
    }

  public:
    // Function that takes last element as pivot, places the pivot element at
    // its correct position in sorted array, and places all smaller elements
    // to left of pivot and all greater elements to right of pivot.
    int partition(vector<int>& arr, int low, int high) {
        int i = low, pivot = arr[low], j = high;
        while(i<j){
            while(i<=high && arr[i]<=pivot) i++;
            while(j>=low && arr[j]>pivot) j--;
            if(i<j) swap(arr[i], arr[j]);
        }
        swap(arr[low], arr[j]);
        return j;
    }
};