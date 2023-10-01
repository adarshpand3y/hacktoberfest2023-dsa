//using Dynamic programming + string
int res(string &s,int l,int r){
	while(l>=0 && r<s.length() && s[l] ==s[r]){
		l--,r++;
	}
	return r-l-1;
}
string longestPalindrome(string s){
	int n = s.length();
	int ans =0,st =0;
	
	for(int i=0;i<n;i++){
		int len1 = res(s,i,i);
		int len2 = res(s,i,i+1);
		
		int len = max(len1,len2);
		if(len>ans){
			ans = len;
			st = i-(len-1)/2;
		}
	}
	return s.substr(st,ans);
}