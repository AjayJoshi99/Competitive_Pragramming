class Solution {
public:
    void moveZeroes(vector<int>& n) {
        for(int i =0; i<n.size(); i++)
            if(n[i]==0){
                for(int j = i+1; j<n.size(); j++){
                    if(n[j]!=0){
                        swap(n[i],n[j]);
                        break;
                    }
                }
            }
    }
};