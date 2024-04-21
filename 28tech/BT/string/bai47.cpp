#include <iostream>
#include <string>

using namespace std;

long long gcd(long long a,long long b){
	if (b == 0) return a;
	return gcd(b,a % b);
}

int main(){
	long long a,x,y;
	cin >> a >> x >> y;
	long long ans = gcd(x,y);
	for(long long i = 1;i <= ans;i++){
		cout << a;
	}
	return 0;
}