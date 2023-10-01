//using Divide & conquer + DP
int maxSubarraySumCircular(vector<int>&nums){
	int totalSum =0;
	int currSum1 =0,currSum2 =0;
	int mxSum_subarray = INT_MIN;
	int mnSum_subarray = INT_MAX;
	
	for(auto i:nums){
		totalSum +=i;
		curr_sum1 +=i;
		curr_sum2 +=i;
		mxSum_subarray = max(mxSum_subarray,currSum1);
		if(currSum1<0)
		currSum1 =0;
		mnSum_subarray = min(mnSum_subarray,currSum2);
		if(currSum2<0)
		currSum2=0;
	}
	return (totalSum ==mnSum_subarray)?mxSum_subarray:max(mxSum_subarray,totalSum-mnSum_subarray);
}