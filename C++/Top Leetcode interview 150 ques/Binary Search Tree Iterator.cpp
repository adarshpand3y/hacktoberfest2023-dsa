//using stack + BST + iterator
class BSTIterator{
	stack<TreeNode*>st;
	BSTIterator(TreeNode*root){
		while(root){
			st.push(root);
			root = root->left;
		}
	}
	
	int next(){
		TreeNode*t1 = st.top();
		st.pop();
		TreeNode*t2 = t1->right;
		while(t2){
			st.push(t2);
			t2 = t2->left;
		}
		return t1->val;
	}
		
	bool hasNext(){
		if(st.empty())
		return false;
		 return true;
	}
}