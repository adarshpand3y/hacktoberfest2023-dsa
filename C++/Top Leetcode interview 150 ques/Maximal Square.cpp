//using matrix  + dynamic programming(bottom up)
int maximalSquare(vector<vector<char>>&matrix){
	int n = matrix.size();
	int m = matrix[0].size();
	
	vector<vector<int>>dp(n,vector<int>(m,0));
	int max_side = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]=='1'){
				if(i==0||j==0){
					dp[i][j] =1;
				}
				else{
					dp[i][j] = 1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
				}
				max_side = max(max_side,dp[i][j]);
			}
		}
	}
		int max_area = max_side*max_side;
		return max_area;
	}