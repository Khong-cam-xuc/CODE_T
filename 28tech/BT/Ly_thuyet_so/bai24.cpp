/**
 *    Author: Andrew
 *    Created: 07.05.2024 10:32:15
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

void solve(){
	ll n;cin >> n;
	ll ans = 1;
	for(ll i = 2; i * i <= n;i++){
		if (n % i == 0){
			ll cnt = 0;
			while(n % i == 0){
				++cnt;
				n /= i;
			}
			ans *= (cnt + 1);

		}
	}
	if (n > 1) ans *= 2;
	cout << ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    solve();
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/