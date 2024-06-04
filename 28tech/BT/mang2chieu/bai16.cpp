/**
 *    Author: Andrew
 *    Created: 05.05.2024 08:02:58
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

const int N = 50;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int n,m;
int a[N + 2][N + 2];

bool check(int x1,int x2){
	if (x1 >= 1 && x1 <= n && x2 >= 1 && x2 <= m) return true;
	return false;
}

void loang(int i,int j){
	a[i][j] = 0;
	REP(k,0,4){
		int x = i + dx[k], y = j + dy[k];
		if (check(x,y) && a[x][y] == 1){
			loang(x,y);
		}
	}
}

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
    int cnt = 0;
    FOR(i,1,n){
    	FOR(j,1,m){
    		if (a[i][j] == 1){
    			++cnt;
    			loang(i,j);
    		}
    	}
    }
   	cout << cnt;
   	// loang(1,1);
   	// FOR(i,1,n){
   	// 	FOR(j,1,m){
   	// 		cout << a[i][j] << " ";
   	// 	}
   	// 	cout << '\n';
   	// }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/