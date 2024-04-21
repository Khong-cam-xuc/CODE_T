#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		map<int,int> mp;
		string s;
		getline(cin,s);
		stringstream ss(s);
		string word;
		while(getline(ss,word,'+')){
			if (word[0] == ' '){
				word.erase(0,1);
			}
			if (word[word.size() - 1] == ' '){
				word.pop_back();
			}
			
			// mu la phan tu chinh la phan tu word[word.size() - 1] con va gia tri la phan tu dau
			///Chuyen doi sang so
			int mu = (word[word.size() - 1] - '0');
			int gt = (word[0] - '0'); 
			mp[mu] += gt;
		}
		vector<pair<int,int>> v;
		for(auto x : mp){
			//cout << x.first << " " << x.second << '\n';
			v.push_back({x.first,x.second});
		}
		for(int i = 0;i < (int)v.size();i++){
			if (i <= (int)v.size() - 2){
				cout << v[i].second << "x^" << v[i].first << " + ";
			}
			else cout << v[i].second << "x^" << v[i].first;
		}
		cout << '\n';
	}
	return 0;
}