/**
 *    Author: Andrew
 *    Created: 07.05.2024 09:26:23
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
    ll a,b;
    cin >> a >> b;
    ll tmp1 = sqrt(a),tmp2 = sqrt(b);
    if (tmp1 * tmp1 != a) ++tmp1;
    cout << tmp2 - tmp1 + 1;
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/