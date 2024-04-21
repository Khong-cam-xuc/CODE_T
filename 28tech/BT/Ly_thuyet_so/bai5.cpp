/**
 *    Author: Phan Duc Phuc
 *    Created: 18.04.2024 11:57:15
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

const int N = 1e6;

int F[N + 2];
vector<int> primes;

void sieve(){
	fill(F,F + N,1);
	F[0] = F[1] = 0;
	for(int i = 2;i *i <= N;i++){
		if (F[i]){
			for(int j = i * i;j <= N;j+=i){
				F[j] = 0;
			}
		}
	}
	for(int i = 2;i <= N;i++){
		if (F[i]){
			primes.push_back(i);
		}
	}
}


void solve(int n){
	map<pair<int,int>,int> mp;
	for(int i = 0;i < (int)primes.size();i++){
		if (primes[i] > n / 2) break;
		if (F[n - primes[i]]){
			if (!mp[{primes[i],n - primes[i]}] && !mp[{n - primes[i],primes[i]}]){
				cout << primes[i] << " " << n - primes[i] << '\n';
				mp[{primes[i],n - primes[i]}] = 1;
			}
		}
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    int t;
    cin >> t;
    while(t--){
    	int n;cin >> n;
    	solve(n);
    }
    //cerr << "Time: " << TIME << "s\n";
    return (0 ^ 0);
}

