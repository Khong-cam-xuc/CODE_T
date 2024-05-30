/**
 *    Author: Andrew
 *    Created: 18.05.2024 09:48:21
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

const int N = 100;

int n,m;
ll a[N + 2][N + 2],b[N + 2][N + 2];

void solve(){
	cin >> n >> m;
	FOR(i,1,n){
		FOR(j,1,m){
			cin >> a[i][j];
		}
	}
	FOR(i,1,n){
		FOR(j,1,m){
			cin >> b[i][j];
		}
	}
	FOR(i,1,n){
		FOR(j,1,m){
			cout << 1ll * a[i][j] * b[i][j] << " ";
		}
		cout << '\n';
	}
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