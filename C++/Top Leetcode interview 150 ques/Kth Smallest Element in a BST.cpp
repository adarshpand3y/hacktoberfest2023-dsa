//using Inorder traversal
void Inorder(TreeNode*root,vector<int>&vec){
	if(root==NULL)
	return;
	Inorder(root->left,vec);
	vec.push_back(root->val);
	Inorder(root->right,vec);
}

int kthSmallest(TreeNode*root,int k){
	vector<int>vec;
	Inorder(root,vec);
	return vec[k-1];
}