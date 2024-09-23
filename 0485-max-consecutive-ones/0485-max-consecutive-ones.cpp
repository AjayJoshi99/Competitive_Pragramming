class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,temp=0;
        for(int val : nums){
            if(val==1) {temp+=1;}
            else {
                count=max(count,temp);
                temp=0;
            }
        }
        count=max(count,temp);
        return count;
    }
};