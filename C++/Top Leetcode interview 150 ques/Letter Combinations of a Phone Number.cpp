//using string + backtracking + hashtable (recursive appraoch)
void letterCombinations(string digits,vector<string>&output,string&temp,vector<string>&pad,int index){
	if(index==digits.size()){
		output.push_back(temp);
		return;
	}
	string value = pad[digits[index]-'0'];
	for(int i=0;i<value.size();i++){
		temp.push_back(value[i]);
		letterCombinations(digits,output,temp,pad,index+1);
		temp.pop_back();
	}
}

vector<string>letterCombinations(string digits){
	if(digits.empty()){
		return {};
	}
	
	vector<string>pad = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	vector<string>output;
	string temp;
	lettercombinations(digits,output,temp,pad,0);
	return output;
}