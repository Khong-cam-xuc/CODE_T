#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		map<char,int> cnt;
		string s;
		cin >> s;
		for(char x : s){
			++cnt[x];
		}
		int dem_le = 0;
		int cnt_1 = 0;
		for(auto x : cnt){
			if (x.second % 2 == 1){
				++dem_le;
			}
		}
		int n = (int)s.size();
		if ((n % 2 == 0 && dem_le == 0) || (n % 2 != 0 && dem_le == 1)){
			cout << "YES\n";
		}
		else cout << "NO\n";
		
	}
	return 0;
}