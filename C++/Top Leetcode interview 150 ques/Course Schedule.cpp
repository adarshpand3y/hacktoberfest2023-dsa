//using DFS + graph
bool isCycle(vector<int>adj[],vector<int>&vis,vector<int>&pathvis,int i){
	vis[i] =1;
	pathvis[i] =1;
	for(auto node:adj[i]){
		if(!vis[node]){
			if(isCycle(adj,vis,pathvis,node))
			return true;
		}
		else{
			if(pathvis[node]==1)
			return true;
		}
	}
	pathvis[i] =0;
	return false;
}

bool canFinish(int n,vector<vector<int>>&prerequisites){
	vector<int>adj[n];
	for(auto val:prerequisites){
		adj[val[1]].push_back(val[0]);
	}
	vector<int>vis(n,0),pathvis(n,0);
	for(int i=0;i<n;i++){
		if(isCycle(adj,vis,pathvis,i))
		return false;
	}
	return true;
}