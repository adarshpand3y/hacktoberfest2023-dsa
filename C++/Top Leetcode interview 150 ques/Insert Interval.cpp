//using array+intervals
vector<vector<int>>insertIntervals(vector<vector<int>>&intervals,vector<int>&newInterval){
	int n = intervals.size();
	int i=0;
	vector<vector<int>>ans;
	
	while(i<n && intervals[i][1]<newInterval[0]){
		ans.push_back(intervals[i]);
		i++;
	}
	
	while(i<n && newInterval[1]>=intervals[i][0]){
		newInterval[0] = min(newInterval[0],intervals[i][0]);
		newInterval[1] = max(newInterval[1],intervals[i][1]);
		i++:
	}
	ans.push_back(newInterval);
	
	while(i<n){
		ans.push_back(intervals[i]);
		i++:
	}
	return ans;
}