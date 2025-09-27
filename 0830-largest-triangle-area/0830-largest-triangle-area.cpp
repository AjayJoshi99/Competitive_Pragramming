class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double ans = 0.0;
        for(int i = 0; i<points.size(); i++){
            for(int j = i+1; j<points.size(); j++){
                for(int k = j + 1; k<points.size(); k++){
                    ans = max(ans, helper(points[i], points[j], points[k]));
                }
            }
        }
        return ans;
    }

    double helper(vector<int> &v1, vector<int> &v2, vector<int> &v3){
        double p1 = sqrt(pow(v1[0]-v2[0],2) + pow(v1[1]-v2[1],2)),
        p2 = sqrt(pow(v2[0]-v3[0],2) + pow(v3[1]-v2[1],2)),
        p3 = sqrt(pow(v1[0]-v3[0],2) + pow(v1[1]-v3[1],2));
        double s = (p1+p2+p3)/2.0, area;
        if (s <= p1 || s <= p2 || s <= p3) { 
            return 0.0; 
        }
        area = sqrt(s*(s-p1)*(s-p2)*(s-p3));
        return area;
    }
};