/**
 *    Author: Andrew
 *    Created: 06.05.2024 08:15:01
**/
#include <bits/stdc++.h>
//#pragma GCC target("popcnt,lzcnt,bmi,bmi2,abm")

using namespace std;

#ifdef Andrew
#include "debug.h"
#else
#define debug(x...)
#endif

#define TIME (1.0 * clock()/ CLOCKS_PER_SEC)
#define FOR(i,a,b) for(int i = (a);i <= (b);++i)
#define FOD(i,b,a) for(int i = (b);i >= (a);--i)
#define REP(i,a,b) for(int i = (a) ;i < (b);++i)
#define file(NAME) if (fopen(NAME".inp","r")){ freopen(NAME".inp","r",stdin);freopen(NAME".out","w",stdout);}


typedef long long ll;

const int MOD = 1e9 + 7;

ll find_pow(ll n,ll p){
	ll ans = 0;
	for(ll i = p; i<= n;i*=p){
		ans += n / i;
	}
	return ans;
}

ll find_zero(ll n,ll p){
	ll ans = 0;
	for(ll i = p; i<= n;i*=p){
		ans += (n / i) % MOD;
		ans %= MOD;
	}
	return ans;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
   	ll n;
   	cin >> n;
   	cout << find_zero(n,5);
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/