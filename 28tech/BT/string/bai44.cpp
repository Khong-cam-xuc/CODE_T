/**
 *    Author: Phan Duc Phuc - THPT NCT Ha Tinh
 *    Created: 16.04.2024 02:24:10
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

const int MOD = 1000000007;

long long bin_pow(long long a,long long b,long long mod){
	long long ans = 1;
	if (b == 0){
		return 1;
	}
	while(b > 0){
		if (b & 1) ans = ((ans % mod) * (a % mod)) % mod;
		a = ((a % mod) * (a % mod)) % mod;
		b >>= 1;
	}
	return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string n;
    long long m;
    cin >> n >> m;
    long long tmp = 0;
    for(int i = 0;i < (int) n.size();i++){
    	tmp = (tmp * 10 + (n[i] - '0')) % MOD;
    }
    if (tmp == 1){
    	cout << 1 << '\n';
    	return 0;
    }
    cout << bin_pow(tmp,m,MOD);
    cerr << "Time: " << TIME << "s\n";
    return (0 ^ 0);
}

