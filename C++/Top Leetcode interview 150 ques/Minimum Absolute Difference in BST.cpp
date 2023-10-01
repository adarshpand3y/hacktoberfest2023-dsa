//using DFS + binary search tree
void solve(TreeNode*root,vector<int>&tmp){
	if(root==NULL)
	return {};
	solve(root->left,tmp);
	tmp.push_back(root->val);
	solve(root->right,tmp);
}

int getMinimumDifference(TreeNode*root){
	int ans = INT_MAX;
	vector<int>tmp;
	solve(root,tmp);
	for(int i=1;i<tmp.size();i++)
		ans = min(ans,tmp[i]-tmp[i-1]);
	return ans;
}