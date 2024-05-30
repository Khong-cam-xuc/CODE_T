/**
 *    Author: Andrew
 *    Created: 28.04.2024 11:08:52
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

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int n,s;
    cin >> n >> s;
    int a[n];
    for(int &x : a) cin >> x;
    ll sum = 0,l = 0,ans = 0;
	REP(r,0,n){
		sum += a[r];
		while(l < n && sum >= s){
			sum -= a[l++];
			ans += n - r;
		}
	}
	cout << ans;
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/