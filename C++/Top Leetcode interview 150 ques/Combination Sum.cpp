//using array + backtracking
void combinationSum(vector<int>&candidates,int target,vector<vector<int>>&ans,vector<int>&temp,int index){
	if(index==candidates.size()){
		if(target==0){
			ans.push_back(temp);
		}
		return;
	}
	if(candidates[index]<=target){
		temp.push_back(candidates[index]);
	combinationSum(candidates,target-candidates[index],ans,temp,index);
	temp.pop_back();
	}
	combinationSum(candidates,target,ans,temp,index);
}

vector<vector<int>>combinationSum(vector<int>&candidates,int target){
	vector<vector<int>>ans;
	vector<int>temp;
	combinationSum(candidates,target,ans,temp,0);
	return ans;
}