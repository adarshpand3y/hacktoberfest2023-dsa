//using sliding window + prefix sum + two pointers 
int minSubArrayLen(vector<int>&nums,int target){
	int i=0,j=0;
	int temp =0;
	int ans = INT_MIN;
	
	while(i<nums.size()){
		temp +=nums[i];
		i++;
		
	while(temp>=target){
		ans = min(ans,i-j);
		temp = temp-nums[j];
		j++;
	}
}
	if(ans==INT_MAX){
		return 0;
	}
	return ans;
}