class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
		
        for(int i = 0; i<=n; i++)
        {
            int count = 0, num = i;
            while(num)
            {
                if(num&1==1) count++;
                num>>=1;
                
            }
            ans.push_back(count);
        }
        return ans;
         
    }
};