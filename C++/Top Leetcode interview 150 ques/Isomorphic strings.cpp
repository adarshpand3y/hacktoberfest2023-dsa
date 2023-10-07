//using string + hashmap
bool isIsomorphic(string s,string t){
	int p[256] = {0};
	int q[256] = {0};
	int n  = s.size();
	
	for(int i=0;i<n;i++){
		if(p[s[i]]!=q[t[i]])
		return false;
		p[s[i]] = i+1;
		q[t[i]] = i+1;
	}
	return true;
}