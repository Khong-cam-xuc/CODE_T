/**
 *    Author: Andrew
 *    Created: 02.05.2024 10:49:02
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

const int N = 1e6;
const int MOD = 1e9 + 7;

long long F[N + 2];

void sieve(){
	F[1] = 2;
	F[2] = 8;
	FOR(i,3,N){
		F[i] = (((2 * F[i - 1]) % MOD) + ((8 * F[i - 2]) % MOD)) % MOD;
	}
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    file("/TASK");
    int t;cin >> t;
    while(t--){
    	int n;cin >> n;
    	cout << F[n] << "\n";
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/