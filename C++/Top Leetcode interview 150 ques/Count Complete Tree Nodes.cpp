//using DFS + recursion
int countTreeNodes(Treenode*root){
	if(root==NULL)
	return;
	return 1+countTreeNodes(root->left)+countTreeNodes(root->right);
}