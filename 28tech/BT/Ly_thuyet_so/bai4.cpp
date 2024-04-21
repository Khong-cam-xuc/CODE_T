#include <bits/stdc++.h>

using namespace std;

const int N = 1e7;
int F[N + 2];

void sieve(){
	fill(F,F + N,1);
	F[0] = 0;
	F[1] = 0;
	for(int i = 2;i *i <= N;i++){
		if (F[i]){
			for(int j = i * i;j <= N;j+=i){
				F[j] = 0;
			}
		}
	}
}

bool tach(int x){
	while(x > 0){
		if (!F[x % 10]){
			return false;
		}
		x /= 10;
	}
	return true;
}

int main(){
	sieve();
	int a,b;
	cin >> a >> b;
	int cnt = 0;
	for(int i = a;i <= b;i++){
		if (F[i] && tach(i)){
			++cnt;
		}
	}
	cout << cnt;
	return 0;
}