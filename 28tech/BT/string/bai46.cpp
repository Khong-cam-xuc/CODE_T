#include <iostream>
#include <string>

using namespace std;



int main(){
	string s;
	cin >> s;
	///co the tach 2 so cuoi de kt no co phai la 00 hay % het cho 4 hay khong
	int du_4 = 0;
	for(int i = 0;i < (int)s.size();i++){
		du_4 = (du_4 * 10 + (s[i] - '0')) % 4;

	}
	if (du_4 == 0){ //co the thay la khi du_4 == 0 thi ket qua la 4 luon
		cout << 4;
	}
	else cout << 0;
	return 0;
}