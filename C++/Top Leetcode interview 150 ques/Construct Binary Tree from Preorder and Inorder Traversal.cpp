//using hash table + divide&conquer
int preorderIndex;
unordered_map<int,int>inorderIndexUmp;

TreeNode*buildTreeAns(vector<int>&preorder,int left,int right){
	if(left>right)
	return NULL;
	int rootValue = preorder[preorderIndex++];
	TreeNode*root = new TreeNode(rootValue);
	int inorderPivotIndex = inorderIndexUmp[root->value];
	root->left = buildTreeAns(preorder,left,inorderPivotIndex-1);
	root->right = buildTreeAns(preorder,inorderPivotIndex+1,right);
	return root;
}

TreeNode*buildTree(vector<int>&preorder,vector<int>&inorder){
	preorderIndex =0;
	for(int i=0;i<inorder.size();i++){
		inorderIndexUmp[inorder[i]] =i;
	}
	return buildTreeAns(preorder,0,preorder.size()-1);
}