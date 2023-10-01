//using DFS
TreeNode*lowestCommonAncestor(TreeNode*root,TreeNode*p,TreeNode*q){
	if(!root){
		return NULL;
	}
	if(root==p||root==q)
		return root;
	TreeNode*l,*r;
	l = lowestCommonAncestor(root->left,p,q);
	r = lowestCommonAncestor(root->right,p,q);
	if(l && r)
	return root;
	if(l)
	return l;
	if(r)
	return r;
	return NULL;
}