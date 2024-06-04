/**
 *    Author: Andrew
 *    Created: 25.04.2024 09:40:44
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
    int n,k;cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a + n);
	long long cnt = 0;
	for(int i = 0;i < n;i++){
		int it = upper_bound(a + i + 1,a + n,a[i] + k) - a - 1; //cuoi
		int it2 = lower_bound(a + i + 1,a + n,a[i] + k) - a; // dau
		if (a[it] == a[i] + k){
			cnt += it - it2 + 1;
		}
	}
	cout << cnt << '\n';
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/