//using DP
int rob(vector<int>&nums){
	int n = nums.size();
	if(n==0)
	return 0;
	else if(n==1)
	return nums[0];
	else if(n==2)
	return max(nums[0],nums[1]);
	
	vector<int>dp(nums);
	dp[1] = max(nums[0],nums[1]);
	
	for(int i=2;i<n;i++){
		dp[i] = max(dp[i-1],nums[i]+dp[i-2]);
	}
	return dp[n-1];
}