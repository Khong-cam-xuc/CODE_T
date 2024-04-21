#include <bits/stdc++.h>

using namespace std;

string plus_a_b(string a,string b){
	int nho = 0;
	string sum_res = "";
	int i = (int)a.size() - 1;
	int j = (int)b.size() - 1;
	while (i >= 0 || j >= 0 || nho > 0){
		int sum = nho;
		if (i >= 0){
			sum += (a[i] - '0');
			--i;
		}
		if (j >= 0){
			sum += (b[j] - '0');
			--j;
		}
		nho = (sum / 10);
		sum %= 10;
		sum_res = (char)(sum + '0') + sum_res;
	}
	return sum_res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string n,m;
		cin >> n >> m;
		cout << plus_a_b(n,m) << '\n';
	}
}