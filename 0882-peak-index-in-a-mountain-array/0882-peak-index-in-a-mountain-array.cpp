class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 0, end = arr.size()-1, ans = INT_MIN, mid = 0;
        while(st<=end){
            mid = st + (end - st)/2;
            if(arr[mid-1] <= arr[mid] && arr[mid] >= arr[mid+1]) return mid;
            if(arr[mid] < arr[mid+1]) st = mid ;
            else if(arr[mid] < arr[mid-1]) end = mid;
        }
        return end;
    }
};