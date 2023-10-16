//using hashmap
unordered_map<Node*,Node*>mp;
Node*cloneGraph(Node*node){
	if(!node)
	return NULL;
	
	Node*head = new node(node->val);
	mp[node] = head;
	
	for(auto i:node->neighbors){
		if(mp.count(i));
		head->neighbors.push_back(mp[i]);
		else
		head->neighbors.push_back(cloneGraph(i));
	}
	return head;
}