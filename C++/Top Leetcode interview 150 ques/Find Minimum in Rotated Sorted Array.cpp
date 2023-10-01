//using binary search
int findMin(vector<int>&nums){
	int n = nums.size();
	if(n==1)
	return nums[0];
	if(nums[0]<nums[n-1])
	return nums[0];
	
	int low =0,high =n-1;
	while(low<=high){
		int mid = low+(high-low)/2;
	if(nums[mid]<nums[mid-1])
		return nums[mid];
	if(nums[mid]>nums[mid+1])
		return nums[mid+1];
	if(nums[low]<nums[mid])
		low = mid+1;
	else if(nums[mid]<nums[high])
		high = mid-1;
}
	return -1;
}