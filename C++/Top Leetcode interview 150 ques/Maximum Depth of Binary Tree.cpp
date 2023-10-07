//using Binary tree
int maxDepth(Treenode*root){
	if(root==NULL)
	return 0;
	int left = maxDepth(root->left);
	int right = maxDepth(root->right);
	return max(left,right)+1;
}