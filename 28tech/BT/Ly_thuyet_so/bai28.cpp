/**
 *    Author: Andrew
 *    Created: 07.05.2024 11:37:43
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


bool check(ll n){
	while(n > 0){
		int du = n % 10;
		if (du != 0 && du != 6 && du != 8) return false;
		n /= 10;
	}
	return true;
}

void solve(){
	ll n;cin >> n;
	cout << check(n);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    solve();
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/