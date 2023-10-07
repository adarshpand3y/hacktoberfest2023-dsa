//using recursive approach
void ans(TreeNode*root,TreeNode*&prev){
	if(root==NULL)
	return;
	ans(root->right,prev);
	ans(root->left,prev);
	root->right = prev;
	root->left = NULL;
}
void flatten(TreeNode*root){
	TreeNode*prev = NULL;
	return ans(root,prev);
}