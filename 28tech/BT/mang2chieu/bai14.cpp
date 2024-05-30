// ma tran xoan oc
/**
 *    Author: Andrew
 *    Created: 05.05.2024 06:08:41
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

const int N = 100;
int ans[N + 2][N + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int n;
    cin >> n;
    int cnt = 1;
    int h1 = 1,h2 = n,c1 = 1,c2 = n;
    while(h1 <= h2 && c1 <= c2){
    	//hang dau
    	FOR(i,c1,c2){
    		ans[h1][i] = cnt;
    		++cnt;
    	}
    	++h1;
    	// cot cuoi
    	FOR(i,h1,h2){
    		ans[i][c2] = cnt;
    		++cnt;
    	}
    	--c2;
    	/// hang duoi;
    	FOD(i,c2,c1){
    		ans[h2][i] = cnt;
    		++cnt;
    	}
    	--h2;
    	// cot dau
    	FOD(i,h2,h1){
    		ans[i][c1] = cnt;
    		++cnt;
    	}
    	++c1;
    }
    FOR(i,1,n){
    	FOR(j,1,n){
    		cout << ans[i][j] << " ";
    	}
    	cout << '\n';
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/