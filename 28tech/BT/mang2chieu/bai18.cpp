/**
 *    Author: Andrew
 *    Created: 15.05.2024 05:50:04
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
const int N = 100;

int n,m;
int a[N + 2][N + 2];
ll ans = 0;

int dx[8] = {-1,-1,-1,0,1,1,1,0};
int dy[8] = {-1, 0, 1,1,1,0,-1,-1};

void check(int i,int j){
	ll cnt = 0;
	REP(k,0,8){
		int x_moi = i + dx[k];
		int y_moi = j + dy[k];
		if (x_moi >= 1 && x_moi <= n && y_moi >= 1 && y_moi <= m){
			if (a[x_moi][y_moi] < a[i][j]) ++cnt;
			else return;
		}
	}
	//cout << cnt << '\n';
	if ((i == 1 && j == 1) || (i == n && j == m) || (i == 1 && j == m) || (i == n && j == 1)){
		if (cnt == 3) ++ans;
	}
	else if (i == 1 || i == n || j == 1 || j == m){
		if (cnt == 5) ++ans;
	}
	else{
		if (cnt == 8) ++ans;
	}
	cnt = 0;
}

void solve(){
	cin >> n >> m;
	FOR(i,1,n){
		FOR(j,1,m){
			cin >> a[i][j];
		}
	}
	/// Check het mang
	FOR(i,1,n){
		FOR(j,1,m){
			check(i,j);
		}
	}
	cout << ans;
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