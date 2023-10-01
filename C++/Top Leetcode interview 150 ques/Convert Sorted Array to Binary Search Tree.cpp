//using binary search tree 
TreeNode*sortedArrayToBST(vector<int>&nums){
	return ans(nums,0,nums.size()-1);
}

TreeNode*ans(vector<int>&nums,int left,int right){
	//base case
	if(left>right){
		return NULL;
	}
	int mid = (left+right)/2;
	TreeNode*temp = new TreeNode(nums[mid]);
	
	temp->left = ans(nums,left,mid-1); //left subtree
	temp->right = ans(nums,mid+1,right); //right subtree
	return temp;
}