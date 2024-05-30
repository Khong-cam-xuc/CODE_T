/**
 *    Author: Andrew
 *    Created: 04.05.2024 08:17:48
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

const int N = 1000;
int n,m;
int a[N + 2][N + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    cin >> n >> m;
    FOR(i,1,n){
    	FOR(j,1,m){
    		cin >> a[i][j];
    	}
    }
    FOR(i,1,n){
    	FOR(j,1,m){
    		if (a[i][j] == 28){
    			FOR(k,1,m){
    				a[i][k] = 28;
    			}
    			FOR(k,1,m){
    				a[k][i] = 28;
    			}
    		}
    	}
    }
    FOR(i,1,n){
    	FOR(j,1,m){
    		cout << a[i][j] << " ";
    	}
    	cout << '\n';
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/