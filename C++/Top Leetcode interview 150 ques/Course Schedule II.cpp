//using topological sort + graph
vector<int>findOrder(int n,vector<vector<int>>&prerquisites){
	vector<int>adj[n];
	for(int i=0;i<prerequisites.size();i++){
		adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
	}
	
	vector<int>top;
	queue<int>q;
	vector<int>indegree(n,0);
	for(int i=0;i<n;i++){
		for(auto val:adj[i]){
			indegree[val]++;
			}
		}
		
		for(int i=0;i<n;i++){
			if(indegree[i]==0)
			q.push(i);
		}
		while(!q.empty()){
		int fr =q.front();
		q.pop();
		top.push_back(fr);
		for(auto val:adj[fr]){
			indegree[val]--;
		if(indegree[val]==0)
		q.push(val);
		}
	}
	cout<<top.size()<<endl;
	if(top.size()==n)
	return top;
	return {};
}