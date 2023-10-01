//using matrix + simulation
void gameOfLive(vector<vector<int>>&board){
	vector<vector<int>>dir{{1,-1},{1,0},{1,1},{0,-1},{0,1},{-1,-1},{-1,0},{-1,1}};
	int m = board.size();
	int n = board[0].size();
	
	vector<vector<int>>ans(m,vector<int>(n));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			int a =0;
		for(int k=0;k<8;k++){
			int r = i+dr[k][0];
			int c = j+dir[k][1];
			if(r>=0 && r<m && c>=0 && c<n){
				if(board[r][c]==1|| board[r][c]==2)
				a++;
			}
		}
		
		if((a<2||a>3) && board[i][j]==1)
		board[i][j]=2;
		if(a==3 && board[i][j]==0)
		board[i][j] =3;
		}
	}
	
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		board[i][j]%=2;
}