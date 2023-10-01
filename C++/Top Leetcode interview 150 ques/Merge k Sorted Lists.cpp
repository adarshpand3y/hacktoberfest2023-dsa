//using Linked List + Merge Sort + heap
ListNode*mergeKLists(vector<ListNode*> &lists){
	vector<int>v;
	for(auto i:lists){
		while(i!=NULL){
			v.push_back(i->val);
			i = i->next;
		}
	}
	if(v.size()==0)
		return NULL;
	sort(v.begin(),v.end());
	
	ListNode*head = new ListNode(v[0]);
	ListNode*temp = head;
	
	for(int i=1;i<v.size();i++){
		ListNode*num = new ListNode(v[i]);
		temp->next = num;
		temp = temp->next;
	}
	return head;
}