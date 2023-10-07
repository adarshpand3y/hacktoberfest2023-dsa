//using iterative way (BFS + queue)
vector<vector<int>>levelOfOrder(TreeNode*root){
	vector<vector<int>>v;
	if(root==NULL)
	return v;
	
	queue<TreeNode*>q;
	q.push(root);
	while(!q.empty()){
		int size = q.size();
		vector<int>temp;
		for(int i=0;i<size();i++){
			TreeNode*ele = q.front();
			q.pop();
			temp.push_back(ele->val);
			if(ele->left)
			q.push_back(ele->left);
			if(ele->right)
			q.push_back(ele->right);
		}
		v.push_back(temp);
	}
	return v;
}