/**
 *    Author: Andrew
 *    Created: 05.05.2024 05:56:47
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

const int N = 50;

ll a[N + 2][N + 2];
ll b[N + 2][N + 2];
ll c[N + 2][N + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int n,m,p;
    cin >> n >> m >> p;
    FOR(i,1,n){
    	FOR(j,1,m){
    		cin >> a[i][j];
    	}
    }
    FOR(i,1,m){
    	FOR(j,1,p){
    		cin >> b[i][j];
    	}
    }
    FOR(i,1,n){
    	FOR(j,1,p){
    		ll sum = 0;
    		FOR(k,1,m){
    			sum += 1ll * a[i][k] * b[k][j]; 
    		}
    		c[i][j] = sum;
    	}
    }
    FOR(i,1,n){
    	FOR(j,1,p){
    		cout << c[i][j] << " ";
    	}
    	cout << '\n';
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/