//using kadane's algorithm
int maxSubarray(vector<int>&nums){
	int n= nums.size();
	int currSum =0;
	int maximumSubarray = INT_MIN;
	
	for(auto i:nums){
		currSum+=i;
		if(currSum>maximumSubarray){
			maximumSubarray = currSum;
		}
		if(currSum<0){
			currSum =0;
		}
	}
	return maximumSubarray;
}