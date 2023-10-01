//using backtracking
vector<vector<string>>ans;
bool isSafe(vector<string>&board,int n,int row,int col){
	for(int i=0;i<n;i++){
		if(board[i][col]=='Q'){
			return false;
		}
	}
	for(int j=0;j<n;j++){
		if(board[row][j]=='Q'){
		return false;
	}
}
	int i = row;
	int j = col;
	while(i>=0 && j<n){
		if(board[i][j]=='Q'){
		return false;
	}
	i--,j++;
}
	i = row,j = col;
	while(i<n && j>=0){
		if(board[i][j]=='Q'){
		return false;
	}
	i++,j--;
}
 	i= row,j = col;
 	while(i>=0 && j>=0){
 		if(board[i][j]='Q'){
 		return false;
	 }
	 i--,j--;
 }
 	while(i<n && j<n){
 		if(board[i][j]=='Q'){
 		return false;
	 }
	 i++,j++;
 }
 return true;
}

void solve(int col,int n,vector<string>&board){
	if(col==n){
		res.push_back(board);
		return;
	}
	for(int i=0;i<n;i++){
		if(isSafe(board,n,i,col)){
			board[i][col] = 'Q';
			solve(col+1,n,board);
			board[i][col] ='.';
		}
	}
}

int totalNQueens(int n){
	string str ="";
	for(int i=0;i<n;i++){
		str+=".";
	}
	vector<string>board(n,str);
	solve(0,n,board);
	return res.size();
}