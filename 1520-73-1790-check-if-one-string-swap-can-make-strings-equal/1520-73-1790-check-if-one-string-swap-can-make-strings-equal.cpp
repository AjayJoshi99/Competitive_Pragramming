class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int l = s1.length(), flag = 0,count=0;
        char c1=' ', c2=' ';
        for(int i =0; i<l; i++){
            if(s1[i]!=s2[i] && flag == 0){
                flag = 1;
                c1 = s1[i];
                c2 = s2[i];
                count++;
            }else if(flag==1 && s1[i]!=s2[i]){
                if(!(c1==s2[i]&&c2==s1[i])){
                    return false;
                }
                count++;
            }
            if(count>2) return false;
        }
        if(count==1 || count >2)  return false;
        return true;
    }

};