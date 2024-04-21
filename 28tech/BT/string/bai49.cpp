#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	string s;
	cin >> s;
	while(s.find("111") != string::npos){
		s.erase(s.find("111"),3);
	}
	if (!s.size()){
		cout << "EMPTY";
	}
	else cout << s;
	return 0;
}