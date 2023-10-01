//using hashmap +sliding window
string minWindow(string s,string t){
	int m = s.size();
	int n = t.size();
	unordered_map<char,int>mp;
	
	int ans = INT_MAX;
	int start =0;
	
	for(auto x:t)
	mp[x]++;
	
	int count =mp.size();
	
	int i=0,j=0;
	
	while(j<s.length()){
		mp[s[j]]--;
		if(mp[s[j]]==0)
		count--;
		
		if(count==0){
			while(count==0){
				if(ans>j-i+1){
					ans = j-i+1;
					start =i;
				}
				
				mp[s[i]]++;
				if(mp[s[i]]>0)
				count++;
				i++;
			}
		}
		j++;
	}
	if(ans!=INT_MAX)
	return s.substr(start,ans);
	else
	return "";
}