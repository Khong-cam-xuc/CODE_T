/**
 *    Author: Andrew
 *    Created: 29.04.2024 01:01:38
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
	if (n < 4) return (void) (cout << "NO");
	long long a[n];
	for(long long &x : a) cin >> x;
	sort(a,a + n);
	REP(i,0,n - 3){
		REP(j,i + 1,n - 2){
			int l = j + 1,r = n - 1;
			while(l < r){
				if (1ll * a[i] + a[j] + a[l] + a[r] == k){
					return (void) (cout << "YES");
				}
				else if (1ll *a[i] + a[j] + a[l] + a[r] < k){
					++l;
				}
				else --r;
			}
		}
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