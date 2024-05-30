/**
 *    Author: Andrew
 *    Created: 05.05.2024 09:22:25
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

ll binpow2(ll a,ll b,ll mod){
	ll ans = 1;
	while(b > 0){
		if (b & 1) {
			ans *= a % mod;
			ans %= mod;
		}
		a *= a % mod;
		a %= mod;
		b >>= 1;
	}
	return (ans % mod);
}
ll binpow(ll a,ll b){
	ll ans = 1;
	while(b > 0){
		if (b & 1) ans *= a;
		a = a * a;
		b >>= 1;
	}
	return ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int n,m,k;
    cin >> n >> m >> k;
    ll mod = binpow(10,k);
    cout << binpow2(n,m,mod);
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/