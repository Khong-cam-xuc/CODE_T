/**
 *    Author: Andrew
 *    Created: 30.04.2024 08:39:33
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

bool check(long long x){
	long long so = 0;
	long long tmp = x;
	while(tmp > 0){
		so = so * 10 + (tmp % 10);
		tmp /= 10;
	}
	if (x == so) return true;
	return false;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    FOR(i,1,n){
    	FOR(j,1,n) cin >> a[i][j];
    }
    long long cnt = 0;
    FOR(i,1,n){
    	FOR(j,1,i){
    		if (check(a[i][j])) ++cnt;
    	}
    }
    cout << cnt;
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/