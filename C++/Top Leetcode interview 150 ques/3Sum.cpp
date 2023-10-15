//using Two pointers + sorting
vector<vector<int>>threesum(vector<int>&nums){
	vector<vector<int>>ans;
	
	if(nums.size()<3)
		return ans;
	set<vector<int>>st;
	sort(nums.begin(),nums.end());
	vector<int>v;
	for(int i=0;i<nums.size()-2;i++){
		if(i!=0 && nums[i]==nums[i-1])
		continue;
		
		int s = i+1,e = nums.size()-1;
		int sum = nums[i]+nums[s]+nums[e];
		
		while(s<e){
			sum = nums[i]+nums[s]+nums[e];
			if(sum==0){
				v.push_back(nums[i]);
				v.push_back(nums[s]);
				v.push_back(nums[e]);
				st.insert(v);
				v.clear();
				s++,e--;
			}
			else if(sum<0)
			s++;
			else
			e--;
		}
	}
	for(auto v:st)
	ans.push_back(v);
	return ans;
}