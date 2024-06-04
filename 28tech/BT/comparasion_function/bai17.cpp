/**
 *    Author: Andrew
 *    Created: 25.04.2024 09:33:52
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
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a + n);
    int q;
	cin >> q;
	while(q--){
		int l,r;
		cin >> l >> r;
		int vi_tri_dau = lower_bound(a,a + n,l) - a; // tim vi tri dau tien ma lon hon hoac bang left
		int vi_tri_cuoi = upper_bound(a,a + n,r) - a - 1; // tim vi tri cuoi cung ma nho hon hoac bang right
		cout << vi_tri_cuoi - vi_tri_dau + 1 << '\n';
	}
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/