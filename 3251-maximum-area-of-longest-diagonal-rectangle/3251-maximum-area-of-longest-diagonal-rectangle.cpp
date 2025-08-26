class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double mx_diagonal = 0;
        int area = 0;
        for(vector<int> v : dimensions){
            double d = sqrt(pow(v[0],2)+pow(v[1],2));
            if(d>mx_diagonal){
                mx_diagonal = d;
                area = v[0]*v[1];
            }else if( d == mx_diagonal){
                area = max(area,v[0]*v[1]);
            }
        }
        return area;
    }
};