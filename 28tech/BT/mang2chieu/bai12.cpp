/**
 *    Author: Andrew
 *    Created: 03.05.2024 11:17:01
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
    int n;cin >> n;
    int a[n + 1][n + 1];
    REP(i,0,n){
    	REP(j,0,n){
    		cin >> a[i][j];
    	}
    }
    vector<vector<int>> v(n);
    REP(i,0,n){
    	REP(j,0,n){
    		v[i].push_back(a[j][i]);
    	}
    }
    
    REP(i,0,n){
    	sort(v[i].begin(),v[i].end());
    }
    REP(i,0,n){
    	REP(j,0,n){
    		cout << v[j][i] << " ";
    	}
    	cout << '\n';
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/