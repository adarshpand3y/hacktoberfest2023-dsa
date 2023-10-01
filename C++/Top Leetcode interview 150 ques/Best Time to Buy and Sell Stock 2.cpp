//using dynamic programming + greedy
int maxProfit(vector<int>&prices){
	int minPrice =prices[0];
	int profit =0;
	
	for(int i=0;i<prices.size();i++){
		int diff = prices[i]-minPrice;
		
		if(prices[i]>minPrice){
			profit +=diff;
			minprice = prices[i];
		}
		
		if(prices[i]<minPrice){
			minPrice = prices[i];
		}
	}
	return profit;
}