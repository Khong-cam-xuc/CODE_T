/**
 *    Author: Andrew
 *    Created: 30.04.2024 08:26:07
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
    int n,m;
    cin >> n >> m;
    int a[n + 1][m + 1];
    int max_arr = 0;
    int min_arr = INT_MAX;
    FOR(i,1,n)
    	FOR(j,1,m){
    		cin >> a[i][j];
    		max_arr = max(max_arr,a[i][j]);
    		min_arr = min(min_arr,a[i][j]);
    	}
    vector<pair<int,int>> min_idx;
    vector<pair<int,int>> max_idx;
    FOR(i,1,n){
    	FOR(j,1,m){
    		if (a[i][j] == min_arr){
    			min_idx.push_back({i,j});
    		}
    		if (a[i][j] == max_arr){
    			max_idx.push_back({i,j});
    		}
    	}
    }
    cout << min_arr << '\n';
    for(auto [x,y] : min_idx) cout << x << " " << y << '\n';
	cout << max_arr << '\n';
	for(auto [x,y] : max_idx) cout << x << " " << y << '\n';
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/