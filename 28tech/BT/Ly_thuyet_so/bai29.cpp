/**
 *    Author: Andrew
 *    Created: 07.05.2024 11:44:28
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

bool sum_cs(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	return (sum % 10 == 8);
}

bool number_tn(int n){
	int tmp = n;
	int ans = 0,cnt_6 = 0;
	while(tmp > 0){
		int du = tmp % 10;
		ans = ans * 10 + (du);
		if (du == 6) ++cnt_6;
		tmp /= 10;
	}
	return (n == ans && cnt_6 > 0);
}


void solve(){
	int a,b;
	cin >> a >> b;
	FOR(i,a,b){
		if (sum_cs(i) & number_tn(i)){
			cout << i << " ";
		}
	}

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    solve();
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/