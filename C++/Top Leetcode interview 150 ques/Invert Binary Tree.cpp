//using Binary Tree
TreeNode*invertTree(TreeNode*root){
	if(root==NULL)
	return NULL;
	
	invertTree(root->left);
	invertTree(root->right);
	
	//swapping the nodes
	TreeNode*temp = root->left;
	root->left = root->right;
	root->right = temp;
	return root;
}