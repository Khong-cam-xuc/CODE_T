/**
 *    Author: Andrew
 *    Created: 03.05.2024 10:39:12
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

const int N = 200;

int n;
int a[N + 2][N + 2];
map<int,int> cnt;


bool is_prime(int x){
	if (x == 2 || x == 3) return true;
	if (x < 3 || x % 2 == 0 || x % 3 == 0) return false;
	for(int i = 5;i *i <= x;i+=6){
		if (x % i == 0 || x % (i + 2) == 0) return false;
	}
	return true;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    cin >> n;
    FOR(i,1,n){
    	FOR(j,1,n){
    		cin >> a[i][j];
    	}
    }
    ll ans = 0;
    FOR(i,1,n){
    	if (!cnt[a[i][i]] && is_prime(a[i][i])){
    		
    		++ans;
    		cnt[a[i][i]] = 1;
    	}
    	if (!cnt[a[i][n - i + 1]] && is_prime(a[i][n - i + 1])){
    		
    		++ans;
    		cnt[a[i][n - i + 1]] = 1;
    	}
    }
    cout << ans;
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/