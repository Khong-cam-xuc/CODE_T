/**
 *    Author: Phan Duc Phuc
 *    Created: 19.04.2024 12:19:08
**/
#include <bits/stdc++.h>
//#pragma GCC target("popcnt,lzcnt,bmi,bmi2,abm")

using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_OJUNGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


#define TIME (1.0 * clock()/ CLOCKS_PER_SEC)
#define FOR(i,a,b) for(int i = (a);i <= (b);++i)
#define FOD(i,b,a) for(int i = (b);i >= (a);--i)
#define REP(i,a,b) for(int i = (a) ;i < (b);++i)
#define file(NAME) if (fopen(NAME".inp","r")){ freopen(NAME".inp","r",stdin);freopen(NAME".out","w",stdout);}
///Gợi ý : Số có 3 ước là số có dạng p^2 trong đó p là số nguyên tố, bây giờ bạn cần liệt kê các số p <= √N. Khi đó bạn chỉ cần liệt kê các số nguyên tố từ 1 tới √N rồi in ra dạng bình phương của nó là được.
bool is_prime(long long n){
	if (n == 2 || n == 3) return true;
	if (n < 3 || n % 2 == 0 || n % 3 == 0) return false;
	for(int i = 5;i * i <= n;i+=6){
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}

int main(){
	long long n;
	cin >> n;
	long long cnt = 0;
	for(long long i = 2;i * i <= n;i++){
		if (is_prime(i)){
			++cnt;
		}
	}
	cout << cnt;
    //cerr << "Time: " << TIME << "s\n";
    return (0 ^ 0);
}