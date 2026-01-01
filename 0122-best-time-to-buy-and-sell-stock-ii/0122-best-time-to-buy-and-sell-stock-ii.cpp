class Solution {
public:
	int f(int i,int buy,vector<int>& p,int n,vector<vector<int>>& dp){
		if(i==n) return 0;
		if(dp[i][buy]!=-1) return dp[i][buy];
		int pro1=INT_MIN,pro2=INT_MIN;
		if(buy){
			int buy=-p[i]+f(i+1,0,p,n,dp);
			int notbuy=f(i+1,1,p,n,dp);
			pro1=max(buy,notbuy);
		}
		else{
			int sell= p[i]+f(i+1,1,p,n,dp);
			int notsell=f(i+1,0,p,n,dp);
			pro2=max(sell,notsell);
		}
		return dp[i][buy]=max(pro1,pro2);
	}

	int maxProfit(vector<int>& p){
		int n=p.size();
		vector<vector<int>> dp(n,vector<int>(2,-1));
		return f(0,1,p,n,dp);
	}
};