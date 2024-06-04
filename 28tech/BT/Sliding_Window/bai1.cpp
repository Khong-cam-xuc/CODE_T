/**
 *    Author: Andrew
 *    Created: 29.04.2024 01:40:49
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
    long long n,k;
    cin >> n >> k;
    long long a[n];
    for(long long &x : a) cin >> x;
    long long sum = 0;
    FOR(i,0,k - 1){
    	sum += a[i];
    }
    long long ans = sum,first = 0,last = k - 1;
    FOR(i,k,n - 1){
    	sum = sum - a[i - k] + a[i];
    	if (ans < sum){
    		ans = sum;
    		first = i - k + 1;
    		last = i;
    	}
    }
    cout << ans << '\n';
    FOR(i,first,last){
    	cout << a[i] << " ";
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/