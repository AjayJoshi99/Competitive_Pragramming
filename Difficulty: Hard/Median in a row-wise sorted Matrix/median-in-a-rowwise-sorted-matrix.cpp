class Solution {
  public:
    int median(vector<vector<int>> &a) {
        int n=a.size(),m=a[0].size();
        int low=0,high=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            int cnt=0;
            for(int i=0;i<n;i++){
                cnt+=upper_bound(a[i].begin(),a[i].end(),mid)-a[i].begin();
            }
            if(cnt<=(n*m)/2){
                low=mid+1;
            }else
                high=mid-1;
        }
        return low;
    }
        
};
