//using Hashmap+Randomized
class Randomizedset{
public:
		unordered_map<int,int>mp;
		vector<int>vec;
		RandomizedSet(){
			
		}
		
		bool insert(int val){
			if(mp.find(val)!=mp.end())
				return false;
			vec.push_back(val);
			mp[val] = vec.size()-1;
				return true;
		}
		
		bool remove(int val){
			if(mp.find(val)==mp.end())
			return false;
			
			int i = mp[val];
			vec[i] = vec[vec.size()-1];
			mp[vec[vec.size()-1]]=i;
				vec.pop_back();
			mp.erase(val);
				return true;
		}
		
		int getRandom(){
			return vec[rand()%vec.size()];
		}
};