//using DFS + binary tree
int ans;
int dfs(TreeNode*root){
	if(root==NULL)
	return 0;
	int l = max(dfs(root->left),0);
	int r = max(dfs(root->right),0);
	ans  = max(ans,l+r+root->val);
	return max(l+root->val,r+root->val);
}
int maxPathSum(TrreNode*root){
	ans = INT_MIN;
	dfs(root);
	return ans;
}