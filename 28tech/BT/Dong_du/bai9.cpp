/**
 *    Author: Andrew
 *    Created: 02.05.2024 11:05:22
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

const int MOD = 100;

long long binpow(long long a,long long b){
	long long ans = 1;
	while(b > 0){
		if (b & 1){
			ans = ((ans % MOD) * (a % MOD)) % MOD;
		}
		a = ((a % MOD) * (a % MOD)) % MOD;
		b >>= 1;
	}
	return ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
   	int n;cin >> n;
   	cout << binpow(28,n);
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/