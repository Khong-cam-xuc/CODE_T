/**
 *    Author: Andrew
 *    Created: 25.04.2024 06:46:25
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

const int N = 2e6;

int a[N + 2],coc[N + 2],pre[N + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int n,k,q;
    cin >> n >> k >> q;
    FOR(i,1,n){
    	int l,r;
    	cin >> l >> r;
    	++a[l];
    	--a[r + 1];
    }
    coc[1] = a[1];
    if (coc[1] >= k) pre[1] = 1;
   	FOR(i,2,10){
   		coc[i] = coc[i - 1] + a[i];
   		if (coc[i] >= k){
   			pre[i] = pre[i - 1] + 1;
   		}
   		else pre[i] = pre[i - 1];
   	}
   	while(q--){
   		int l,r;
   		cin >> l >> r;
   		cout << pre[r] - pre[l - 1] << '\n';
   	}
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/