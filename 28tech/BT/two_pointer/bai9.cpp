/**
 *    Author: Andrew
 *    Created: 28.04.2024 07:05:35
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




const int N = 1e6;

int n, a[N + 2],pre[N + 2];
int F[N + 2];

void sieve(){
	fill(F,F + N,1);
	F[0] = 0;
	F[1] = 0;
	for(int i =2 ; i * i <= N;i++){
		if (F[i]){
			for(int j = i * i;j <= N;j+=i){
				F[j] = 0;
			}
		}
	}
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    sieve();
    cin >> n;
    FOR(i,1,n){
    	cin >> a[i];
    }
    
    int l = 1,ans = n,cnt = 0;
    FOR(r,1,n){
    	while (r <= n && cnt < 2){
    		if (F[a[r]]) ++cnt;
    		++r;
    	}
    	ans = min(ans,r - l - 1);
    	cout << ans << '\n';
    	while (l <= r && cnt >= 2){
    		if (F[a[l]]) --cnt;
    		++l;
    	}
    }
    cout << ans;
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/