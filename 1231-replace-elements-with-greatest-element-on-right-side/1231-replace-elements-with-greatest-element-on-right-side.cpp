class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int idx = arr.size()-2,mx=arr[arr.size()-1];
        arr[arr.size()-1] = -1;
        while(idx>-1){
            int temp = arr[idx];
            arr[idx] = max(arr[idx+1],mx);
            mx = temp;
            idx--;
        }
        return arr;
    }
};