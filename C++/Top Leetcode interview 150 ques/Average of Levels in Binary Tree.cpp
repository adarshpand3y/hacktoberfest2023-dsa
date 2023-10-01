//using binary tree
vector<double>averageOfLevels(TreeNode*root){
	vector<double>ans;
	queue<TreeNode*>q;
	q.push(root);
	q.push(NULL);
	
	double cnt =0,sum =0;
	while(!pq.empty()){
		TreeNode*top = q.front();
		q.pop();
		if(top){
			cnt++;
			sum +=top->val;
		if(top->left)
			q.push(top->left);
		if(top->right)
			q.push(top->right);
		}
		else{
			ans.push_back(sum/cnt);
			cnt =sum =0;
			if(q.empty()){
				break;
			}
			else{
				q.push(NULL);
			}
		}
	}
	return ans;
}