#include <bits/stdc++.h>

using namespace std;

const int N = 1e6;
int F[N + 2];

void sieve(){
	fill(F,F + N,1);
	F[0] = 0;
	F[1] = 0;
	for(int i = 2;i * i <= N;i++){
		if(F[i]){
			for(int j = i * i ;j <= N;j+=i){
				F[j] = 0;
			}
		}
	}
}

int main(){
	sieve();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << (F[n] ? "YES\n" : "NO\n");
	}
	return 0;
}