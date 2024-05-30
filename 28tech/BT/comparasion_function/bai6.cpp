/**
 *    Author: Phan Duc Phuc
 *    Created: 24.04.2024 01:03:01
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

long long cnt_so(int x){
	int cnt = 0;
	while(x > 0){
		int du = x % 10;
		if (du == 0 || du == 6 || du == 8){
			++cnt;
		}
		x /= 10;
	}
	return cnt;
}

bool cmp(int x,int y){
	if (cnt_so(x) != cnt_so(y)){
		return cnt_so(x) > cnt_so(y);
	}
	return x < y;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a + n,cmp);
	for(int x : a) cout << x << " ";
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/