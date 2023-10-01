//using binary search + array
vector<int>searchRange(vector<int>&nums,int target){
	vector<int>ans = {-1,-1};
	int n = nums.size();
	
	int idx = find(nums,0,n-1,target);
	if(idx!=-1){
		ans[0] =idx;
		ans[1] =idx;
		
	while(idx-1>=0 && nums[idx-1]==target){
		ans[0]= --idx;
	}
	
	while(idx+1<n && nums[idx+1]==target){
		ans[1]= ++idx;
	}
}
	return ans;
}

int find(vector<int>&nums,int s,int e,int target){
	//using binary search
	if(s<=e){
		int mid  = s+(e-s)/2;
		if(nums[mid]==target)
			return mid;
		else if(target>nums[mid])
			return find(nums,mid+1,e,target);
		else
			return find(nums,s,mid-1,target);
	}
	return -1;
}