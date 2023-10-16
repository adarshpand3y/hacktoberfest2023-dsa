//using string
string longestCommonPrefix(vector<string>&s){
	int n = s.size();
	
	int ans = s[0].length();
	for(int i=1;i<n;i++){
		int j=0;
		
		while(j<s[i].length() && s[i][j] == s[0][j])
		j++;
		ans = min(ans,j);
	}
	return s[0].substr(0,ans);
}