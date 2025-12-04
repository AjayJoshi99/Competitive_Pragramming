class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;

        for(int i = 0; i<asteroids.size(); i++){
            bool destroyed = false;
            while( ans.size()>0 && (ans.back()>0 && asteroids[i]<0 )){
                if(abs(asteroids[i]) < ans.back()){
                    destroyed= true; 
                    break; 
                }else if(abs(asteroids[i]) == ans.back()){
                    destroyed = true;
                    ans.pop_back();
                    break;
                }
                else ans.pop_back();
            }
            if(destroyed) continue;
            ans.push_back(asteroids[i]);
        }
        return ans;
    }
};