/**
 *    Author: Phan Duc Phuc
 *    Created: 19.04.2024 10:09:51
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

///chu y bat dau tu 3 thi so nt la so le
int main(){
    long long n;
    cin >> n;
	vector<pair<long long,int>> v;
	int e = 0;
	while(n % 2 == 0){
		n/= 2;
		++e;
	}
	if (e > 0){
		v.emplace_back(2,e);
	}
	e = 0;
	for(long long i = 3;i *i <= n;i+= 2){
		if (n % i == 0){
			while(n % i == 0){
				++e;
				n /= i;
			}
			v.emplace_back(i,e);
		}
	}
	if (n > 2){
		v.emplace_back(n,1);
	}
	for(int i = 0;i < (int)v.size() - 1;i++){
		cout << v[i].first << "^" << v[i].second << " * ";
	}
	cout << v[v.size() - 1].first << "^" << v[v.size() - 1].second;
	//cerr << "Time: " << TIME << "s\n";
    return (0 ^ 0);
}