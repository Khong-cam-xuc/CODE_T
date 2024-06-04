/**
 *    Author: Andrew
 *    Created: 29.04.2024 01:14:57
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

// int cnt2[N + 2];
// int cnt8[N + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    string s;
    cin >> s;
    int x,y;
    cin >> x >> y;
    int n = (int)s.size();
    int l = 0,cnt2 = 0,cnt8 = 0;
    int ans = 0;
    FOR(r,0,n - 1){
    	if (s[r] == '2') ++cnt2;
    	else ++cnt8;
    	while(cnt2 > x || cnt8 > y){
    		if (s[l] == '2') --cnt2;
    		else --cnt8;
    		++l;
    	}
    	// dam bao luon sl_2>= x && sl8 >= y
    	ans = max(ans,r - l + 1);

    }
    cout << ans;
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/