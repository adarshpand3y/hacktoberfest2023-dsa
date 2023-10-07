//using Dynamic programming + greedy
int jump(vector<int>&nums){
	int n = num.size();
	if(n==1)
		return 0;
	if(nums[0]==0)
		return -1;
	
	int maxReach=0;
	int jump=0;
	int curr =0;
	for(int i=0;i<n;i++){
		maxReach = max(maxReach,i+nums[i]);
	if(maxReach>=n-1)
		return jump+1;
		
	if(i==curr){
		curr = maxReach;
		jump++;
		}
	}
	return -1;
}