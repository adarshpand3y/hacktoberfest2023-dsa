//using math
int trailingZeroes(int n){
	int x=0;
	for(int i =5;i<=n;i+=5){
		int m =i;
		while(m%i==0){
			m /=5;
			x++;
		}
	}
	return x;
}