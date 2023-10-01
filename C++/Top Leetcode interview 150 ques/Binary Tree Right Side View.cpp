//using DFS + binary tree
void freq(TreeNode*root,vector<int>&ans,int h){
	if(!root)
	return;
	if(h ==ans.size());
		ans.push_back(root->val);
	freq(root->right,ans,h+1);
	freq(root->left,ans,h+1);
}

vector<int>rightSideView(TreeNode*root){
	vector<int>ans;
	freq(root,ans,0);
	return ans;
}