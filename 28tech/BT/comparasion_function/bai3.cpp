/**
 *    Author: Phan Duc Phuc
 *    Created: 23.04.2024 10:15:27
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
    int n,x;
    cin >> n >> x;
    int a[n];
    for(int &i : a) cin >> i;
    auto it = lower_bound(a,a + n,x);
	if (it != a + n){
		cout << (it - a) << '\n'; 
	}
	else{
		cout << -1 << '\n';
	}
	auto it2 = upper_bound(a,a + n,x);
	if (it2 != a + n){
		cout << (it2 - a) << '\n';
	}
	else cout << -1 << '\n';
	int l = 0,r = 0;
	if (*it == x){
		cout << (it - a) << '\n';
		l = it - a;
	}
	else{
		cout << -1 << '\n';
	}
	--it2;
	if (*it2 == x){
		cout << (it2 - a) << '\n';
		r = it2 - a;
	}
	else cout << -1 << '\n';
	if (l >= 1 && r >= 1){
		cout << r - l + 1 << '\n';
	}
	else cout << 0 << '\n';
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/