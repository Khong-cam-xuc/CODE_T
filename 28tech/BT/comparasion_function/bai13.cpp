/**
 *    Author: Andrew
 *    Created: 24.04.2024 08:50:02
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
    auto it = upper_bound(a,a + n,x);
	--it;
	if (it == a -1){
		cout << "NOT FOUND";
	}
	else{
		
		cout << *it << '\n';
	}
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/