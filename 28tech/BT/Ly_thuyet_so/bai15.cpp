/**
 *    Author: Andrew
 *    Created: 06.05.2024 09:43:45
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

bool tsnt(ll n){
	if (n < 30) return false;
	int ans = 0;
	for(ll i = 2; i * i <= n;i++){
		if (n % i == 0){
			++ans;
			if (ans == 4) return false;
			int cnt = 0;
			while(n % i == 0){
				++cnt;
				if (cnt == 2) return false;
				n /= i;
			}
		}
	}
	if (n > 1) ++ans;
	return (ans == 3 ? true : false);
}

void thuaso(ll n){
	for(int i = 2 ;i * i <= n;i++){
		if (n % i == 0){
			while(n % i == 0){
				cout << i << " ";
				n /= i;
			}
		}
	}
	if (n > 1){
		cout << n;
	}
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    ll n;
    cin >> n;
    // FOR(i,1,10000){
    // 	cout << i << ": ";
    // 	thuaso(i);
    // 	cout << " KQ: " << tsnt(i) << '\n';
    // }
    cout << tsnt(n);
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/