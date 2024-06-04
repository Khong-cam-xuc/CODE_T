/**
 *    Author: Andrew
 *    Created: 28.04.2024 11:27:32
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
    int n,k;
    cin >> n >> k;
    int cnt = 0; /// dem so luong phan tu khac nhau
    map<int,int> mp;
    ll ans = 0;
    int a[n];
    for(int &x : a) cin >> x;
    int l = 0;
	REP(r,0,n){
		cnt += ++mp[a[r]] == 1;
		while(l <= r && cnt > k){
			cnt -= mp[a[l++]]-- == 1;
		}
		ans += r - l + 1;

	}
	cout << ans;
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/