#include <bits/stdc++.h>

using namespace std;

int is_prime(int n){
	for(int i = 2; i * i <= n;i++){
		if (n % i == 0){
			return false;
		}
	}
	return (n > 1);
}

int main(){
	// if (fopen("TASK.inp","r")){
	// 	freopen("TASK.inp","r",stdin);
	// 	freopen("TASK.out","w",stdout);
	// }
	int n;
	cin >> n;
	if (is_prime(n)){
		cout << "YES\n";
	}
	else cout << "NO\n";
	return 0;
}