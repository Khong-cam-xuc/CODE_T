/**
 *    Author: Andrew
 *    Created: 15.05.2024 05:29:34
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
#define all(x) ((x).first,(x).second)
#define fi first
#define se second

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vii;
typedef vector<vector<int>> vvi;

const int INF = 1e9 + 7;
const ll LLNF = 1e18 + 9;
const int MOD = 1e9 + 7;
const int N = 50;

int n,m;
int a[N + 2][N + 2];
int dx[8] = {-1,-1,-1,0,1,1,1,0};
int dy[8] = {-1, 0, 1,1,1,0,-1,-1};

int ans = 0;

void loang(int x,int y){
	a[x][y] = 0;
	REP(i,0,8){
		int x_moi = x + dx[i];
		int y_moi = y + dy[i];

		if (x_moi >= 1 && x_moi <= n && y_moi >= 1 && y_moi <= m && a[x_moi][y_moi]){
			loang(x_moi,y_moi);
		}
	}

}


void solve(){
	cin >> n >> m;
	FOR(i,1,n){
		FOR(j,1,m){
			cin >> a[i][j];
		}
	}
	// Loang;
	ll cnt = 0;
	FOR(i,1,n){
		FOR(j,1,m){
			if (a[i][j] == 1){
				++cnt;
				loang(i,j);
			}
		}
	}
	
	cout << cnt;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int tc;
    //cin >> tc;
    tc = 1;
    while(tc--){
    	solve();
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/