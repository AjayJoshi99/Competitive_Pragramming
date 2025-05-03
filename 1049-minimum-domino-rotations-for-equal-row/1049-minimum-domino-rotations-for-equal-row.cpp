class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int top = 0, bottom = 0, flag = 0, val;
        for(int i = 1; i<bottoms.size(); i++){
            if((bottoms[i]==bottoms[i-1] && tops[i]==tops[i-1] )|| (bottoms[i]==tops[i-1]&&bottoms[i-1]==tops[i]))  continue;
            else if(bottoms[i]==bottoms[i-1]==tops[i]==tops[i-1]){ val = bottoms[i]; break;}
            else if(bottoms[i]==bottoms[i-1] || bottoms[i]==tops[i-1]) {val = bottoms[i]; break;}
            else if(tops[i]==tops[i-1] || bottoms[i-1]==tops[i] ){ val = tops[i]; break;}
        }
        for(int i = 0; i<bottoms.size(); i++){
            if(bottoms[i]!=val && tops[i]!=val) return -1;
            if(bottoms[i]!=val) bottom++;
            if(tops[i] != val) top++;
        }
        return top<bottom ? top : bottom;
    }
};