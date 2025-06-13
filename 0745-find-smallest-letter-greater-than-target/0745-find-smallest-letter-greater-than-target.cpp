class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       int st = 0, end = letters.size()-1;
       while(st<=end){
        int mid = (st+end)/2;
        if(letters[mid] > target && mid - 1 > -1 && letters[mid-1] <= target){
            return letters[mid];
        }
        if(letters[mid]< target) st = mid +1;
        else if(letters[mid] == target) st = mid +1;
        else end = mid -1;
       }
       return letters[0];
    }
};