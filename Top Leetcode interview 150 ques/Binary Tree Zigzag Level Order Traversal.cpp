//using BFS + binary tree
vector<vector<int>>zigzagLevelOrder(TreeNode*root){
	if(root==NULL)
	return {};
	
	vector<vector<int>>ans;
	queue<TreeNode*>q;
	
	int isLevelEvenOrOdd =0;
	q.push(root);
	while(!q.empty()){
		int nodesInLevel  = q.size();
		vector<int>vec;
		
		while(nodesInLevel--){
			TreeNode*temp = q.front();
			q.pop();
		if(isLevelEvenOrOdd%2==0)
		vec.push_back(temp->val);
		else
		vec.insert(vec.begin(),temp->val);
		if(temp->left!=NULL)
		q.push(temp->left);
		if(temp->right!=NULL)
		q.push(temp->right);
	}
		isLevelEvenOrOdd++;
		ans.push_back(vec);
	}
	return ans;
}