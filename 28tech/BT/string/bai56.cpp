#include <iostream>
#include <string>
#include <map>

using namespace std;




int main(){
	int t;
	cin >> t;
	//cin.ignore();
	map<char,int> ki_tu;
	ki_tu['I'] = 1;
	ki_tu['V'] = 5;
	ki_tu['X'] = 10;
	ki_tu['L'] = 50;
	ki_tu['C'] = 100;
	ki_tu['D'] = 500;
	ki_tu['M'] = 1000;
	while(t--){
		string s;
		cin >> s;
		long long ans = 0;
		for(int i = 0;i < (int)s.size();i++){
			if (ki_tu[s[i]] < ki_tu[s[i + 1]]){
				ans += ((ki_tu[s[i + 1]]) - (ki_tu[s[i]]));
				++i;
			}
			else{
				ans += ki_tu[s[i]];
			}
		}
		cout << ans << '\n';
	}
	return 0;
}