//using String
int lengthOfLastWord(string s){
	int cnt =0;
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]!=' '){
			cnt++;
		}
		if(s[i]==' '){
			if(cnt>0){
				break;
			}
		}
	}
	return cnt;
}