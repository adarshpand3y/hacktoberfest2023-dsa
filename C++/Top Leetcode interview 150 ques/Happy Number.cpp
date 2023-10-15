//using math + hashtable
int getNext(int n){
	int totalSum =0;
	while(n>0){
		int d = n%10;
		n = n/10;
		totalSum = totalSum+d*d;
	}
	return totalSum;
}
bool isHappy(int n){
	set<int>vis;
	while(n!=1 && vis.find(n)==vis.end()){
		vis.insert(n);
		n = getNext(n);
	}
	return n==1;
}