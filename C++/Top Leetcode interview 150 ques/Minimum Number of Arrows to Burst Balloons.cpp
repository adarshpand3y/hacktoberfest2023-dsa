//using greedy + sorting
int findMinArrowShots(vector<vector<int>>&points){
	int arrow =1;
	int last = points[0][1];
	
	sort(points.begin(),points.end());
	
	for(int i=0;i<points.size();i++){
		if(points[i][0]>last){
			arrow++;
			last = points[i][1];
		}
		
		else
		last = min(last,points[i][1]);
	}
	return arrow;
}