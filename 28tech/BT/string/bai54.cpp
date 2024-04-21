#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s,t;
		cin >> s >> t;
		map<char,int> mp;
		for(char x : s){
			++mp[x];
		}
		for(char x : t){
			if (mp[x] > 0){
				--mp[x];
			}
		}
		bool check = true;
		for(auto x : mp){
			if (x.second > 0){
				check = false;
				break;
			}
		}
		cout << (check ? "YES\n" : "NO\n");
	}
	return 0;
}