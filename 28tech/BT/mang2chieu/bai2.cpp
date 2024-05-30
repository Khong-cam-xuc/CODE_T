/**
 *    Author: Andrew
 *    Created: 30.04.2024 07:57:48
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


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int n,m;
    cin >> n >> m;
    int a[n + 1][m + 1];
    FOR(i,1,n) 
    	FOR(j,1,m) cin >> a[i][j];
    FOR(i,1,n){
    	long long sum = 0;
    	FOR(j,1,m){
    		sum += a[i][j];
    	}
    	cout << sum << " ";
    }
    cout << "\n";
    FOR(i,1,m){
    	long long sum = 0;
    	FOR(j,1,n){
    		sum += a[j][i];
    	}
    	cout << sum << " ";
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/