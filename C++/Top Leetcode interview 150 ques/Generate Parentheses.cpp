//using string + backtracking
bool valid(vector<char>&temp){
	int balance =0;
	for(auto c:temp){
		if(c=='(')
		balance++;
		else
		balance--;
		if(balance<0)
		return false;
	}
	return balance==0;
}

void generateAllParanthesis(vector<string>&paranthesesCombinations,vector<char>temp,int pos){
	if(pos==temp.size()){
		if(valid(temp)){
			string s(temp.begin(),temp.end());
			paranthesesCombinations.push_back(s);
		}
		return;
	}
	temp[position] = '(';
	generateAllParanthesis(paranthesesCombinations,temp,pos+1);
	temp[pos] = ')';
	generateAllParanthesis(paranthesesCombinations,temp,pos+1);
}

vector<string>generateParanthesis(int n){
	vector<string>paranthesesCombinations;
	vector<char>temp(2*n);
	generateAllParanthesis(paranthesesCombinations,temp,0);
	return paranthesesCombinations;
}