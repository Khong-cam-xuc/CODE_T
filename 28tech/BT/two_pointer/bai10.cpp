/**
 *    Author: Andrew
 *    Created: 29.04.2024 01:48:29
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


void solve(){
	int n,k;
	cin >> n >> k;
	int a[n];
	for(int &x : a)cin >> x;
	map<int,int> mp;
	REP(i,0,n){
		if(mp[k - a[i]] > 0){
			return (void) (cout << "YES");
		}
		++mp[a[i]];
	}
	return (void) (cout << "NO");
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    solve();
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/