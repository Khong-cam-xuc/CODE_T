/**
 *    Author: Andrew
 *    Created: 07.05.2024 09:01:27
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
  	for(ll i = sqrt(a);i <= sqrt(b);i++){
  		ll tmp = i * i;
  		if (tmp >= a && tmp <= b) cout << tmp << " ";
  	}
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/