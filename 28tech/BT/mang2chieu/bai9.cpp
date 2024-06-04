/**
 *    Author: Andrew
 *    Created: 03.05.2024 09:59:08
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


bool is_prime(int n){
	if (n == 2 || n == 3) return true;
	if (n < 3 || n % 2 == 0 || n % 3 == 0) return false;
	for(int i = 5;i *i <= n;i+=6){
		if (n %  i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int n;cin >> n;
    int a[n + 1][n + 1];
    FOR(i,1,n){
    	FOR(j,1,n){
    		cin >> a[i][j];
    	}
    }
    long long cnt = 0;
    FOR(i,1,n){
    	// cheo chinh
    	if (is_prime(a[i][i])) ++cnt;
    	//cheo phu
    	if (is_prime(a[i][n - i + 1])) ++cnt;
    }
    if (n % 2 != 0 && is_prime(a[(n)/ 2 + 1][(n) / 2 + 1])){
    	--cnt;
    }
    cout << cnt;
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/