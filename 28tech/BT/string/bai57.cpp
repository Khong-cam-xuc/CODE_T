#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	int nt = 10;
	map<string,int> mp;
	while(nt--){
		string tmp;
		int ptk;
		cin >> tmp >> ptk;
		mp[tmp] = ptk; 
	}
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string tu = "";
		long long ans = 0;
		int nums = 0;
		int i = 0;
		while(i < s.size()){
			while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
				tu += s[i];
				++i;
			}
			while(s[i] >= '0' && s[i] <= '9'){
				nums = nums * 10 + (s[i] - '0');
				++i;
			}
			ans += (mp[tu] * nums);
			tu = "";
			nums = 0;
		}
		cout << ans << '\n';
	}
	return 0;
}