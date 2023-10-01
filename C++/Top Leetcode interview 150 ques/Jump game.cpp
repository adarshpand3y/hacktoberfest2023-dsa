//using dynamic programming + greedy
bool canJump(vector<int>&nums){
	int target =0;
	for(int i=0;i<=target;i++){
		target = max(target,nums[i]+i);
		if(target>=nums.size()-1){
			return true;
		}
	}
	return false;
}