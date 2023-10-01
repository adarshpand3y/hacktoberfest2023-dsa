//using counting + divide&conqueror
int majorityElement(vector<int>&nums){
	int majority =-1;
	int cnt =0,n = nums.size();
	
	for(int i=0;i<n;i++){
		if(nums[i]==majority){
			cnt++;
		}
		else if(count==0){
			majority = nums[i];
		}
		else
			cnt--;
	}
	cnt =0;
	for(int i=0;i<n;i++){
		if(nums[i]==majority){
			cnt++;
		}
	}
	if(cnt>n/2){
		return majority;
	}
	else
	return -1;
}