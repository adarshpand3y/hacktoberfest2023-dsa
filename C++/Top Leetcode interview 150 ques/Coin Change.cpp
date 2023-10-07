//using DP
int coinChange(vector<int>&coins,int amount){
	int n =coins.size();
	if(amount==0)
	return 0;
	if(n==0)
	return -1;
	
	vector<int>dp(amount+1,amount+1);
	dp[0] =0;
	sort(coins.begin().coins.end());
	for(int i=1;i<=amount;i++){
		for(int j=0;j<n;j++){
			if(i<coins[j])
			break;
			dp[i]  = min(dp[i],1+dp[i-coins[j]]);
		}
	}
	
	if(dp[amount]!=amount+1)
	return dp[amount];
	
	return -1;
}