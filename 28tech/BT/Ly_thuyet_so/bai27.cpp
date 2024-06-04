/**
 *    Author: Andrew
 *    Created: 07.05.2024 11:04:28
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

bool uocnt(int n){
	int cnt = 0;
	for(int i =2 ;i * i <= n;i++){
		if (n % i == 0){
			++cnt;
			while(n % i == 0){
				n /= i;
			}
			if (cnt >= 3) return true;
		}
	}
	if (n > 1) ++cnt;
	if (cnt >= 3) return true;
	return false;
}

bool check_tn(int n){
	int ans = 0;
	int tmp  = n;
	while(tmp > 0){
		ans = ans * 10 + (tmp % 10);
		tmp /= 10;
	}
	if (ans == n) return true;
	return false;
}

void solve(){
	int a,b;cin >> a >> b;
	bool check = false;
	FOR(i,max(a,33),b){
		if (check_tn(i) && uocnt(i)){
			check = true;
			cout << i << " ";
		}
	}
	if (!check) cout << -1 << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    solve();
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/