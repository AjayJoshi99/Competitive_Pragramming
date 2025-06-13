class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       int st = 0, end = letters.size()-1;
       char ans = 'z';
       bool flag = false;
       while(st<=end){
        int mid = (st+end)/2;
        if(letters[mid] == target && mid+1 <letters.size() && letters[mid+1] != target) return letters[mid+1];
        if(letters[mid] > target ){
            ans = min(ans, letters[mid]);
            flag = true;
            end = mid - 1;
        }else{
         st = mid +1;   
        }
       }
       if(flag) return ans;
       return letters[0];
    }
};