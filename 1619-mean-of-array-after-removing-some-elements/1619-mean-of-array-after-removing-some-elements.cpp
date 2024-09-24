class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int five_percent = arr.size()/20;
        int total = 0,start=five_percent,end=arr.size()-five_percent,count=0;
        while(start<end){
            total+=arr[start++];
            count+=1;
        }
        return (double)total/count;
        
    }
};