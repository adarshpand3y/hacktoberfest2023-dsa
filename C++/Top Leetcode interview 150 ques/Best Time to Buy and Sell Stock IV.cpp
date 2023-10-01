//using dynamic programming
int maxProfit(vector<int>&prices){
	int n = prices.size();
	vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(k+1,0)));
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<2;j++){
			for(int x =1;x<k+1;x++){
				if(j==1){
					dp[i][j][x] = max((-1)*prices[i]+dp[i+1][0][x],dp[i+1][j][x]);
				}
				else{
					dp[i][j][x] = max(prices[i]+dp[i+1][1][x-1],dp[i+1][j][x];
				}
			}
		}
	}
	return dp[0][1][k];
}