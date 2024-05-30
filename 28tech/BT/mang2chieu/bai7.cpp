/**
 *    Author: Andrew
 *    Created: 03.05.2024 08:50:07
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

const int N = 200;

int n;
int a[N + 2][N + 2];

void Swap_hang(int u,int v){
	FOR(i,1,n){
		swap(a[u][i],a[v][i]);
	}
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

    int u,v;
    cin >> u >> v;
    Swap_hang(u,v);
    FOR(i,1,n){
    	FOR(j,1,n){
    		cout << a[i][j] << " ";
    	}
    	cout << '\n';
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/