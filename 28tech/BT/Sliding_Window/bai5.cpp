/**
 *    Author: Andrew
 *    Created: 30.04.2024 12:49:02
**/
#include <bits/stdc++.h>
#pragma GCC target("popcnt,lzcnt,bmi,bmi2,abm")

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

int dd[256];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    string s;
    cin >> s;
    int n = (int)s.size();
    int ans = 0,l = 0; ///1 ki tu
    REP(i,0,n){
    	++dd[s[i]];
    	while(dd[s[i]] == 2){
    		--dd[s[l]];
    		++l;
    	
    	ans = max(ans,i - l + 1);
    }
    cout << ans;
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/