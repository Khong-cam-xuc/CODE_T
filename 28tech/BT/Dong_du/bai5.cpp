/**
 *    Author: Andrew
 *    Created: 05.05.2024 09:10:14
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

const int N = 1e6;
const int MOD = 1e9 + 7;

ll F[N + 2];

void sieve(){
	F[1] = 1;
	F[2] = 1;
	FOR(i,3,N){
		F[i] = (((2 * F[i - 1]) % MOD + (3 * F[i - 2]) % MOD)) % MOD;
	}
}

void solve(){
	int n;cin >> n;
	cout << F[n];
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    sieve();
    solve();
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/