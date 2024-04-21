#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	int so = 0;
	string ans = "";
	for(char x : s){
		if (x >= '0' && x <= '9'){
			so = so * 10 + (x - '0');
		}
		else{
			for(int i = 1;i < so;i++){
				ans += ans[ans.size() - 1];
			}
			ans += x;
			so = 0;
		}
	}
	for(int i = 1;i < so;i++){
		ans += ans[ans.size() - 1];
	}
	cout << ans;
	return 0;
}