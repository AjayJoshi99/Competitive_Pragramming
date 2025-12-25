class Solution {
  public:
    int minCost(vector<int>& height) {
        vector<int> v(height.size());
        v[0] = 0;
        v[1] = abs(height[0]-height[1]);
        
        for(int i = 2; i<height.size(); i++){
            int temp1 = abs(height[i]-height[i-1]) + v[i-1];
            int temp2 = abs(height[i]-height[i-2]) + v[i-2];
            if(temp1<temp2){
                v[i] = temp1;
            }else{
                v[i] = temp2;
            }
        }
        return v.back();
    }
};