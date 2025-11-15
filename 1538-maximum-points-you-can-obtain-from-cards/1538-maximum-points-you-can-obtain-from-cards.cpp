class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans = 0, temp = 0;
        int i = 0, j = cardPoints.size()-1;
        while(i<k){
            temp+=cardPoints[i]; 
            i++;
        }
        ans = temp;
        i--;
        while(i>-1){
            temp -= cardPoints[i];
            temp+= cardPoints[j];
            i--;j--;
            ans = max(ans, temp);
        }
        return ans;
    }
};