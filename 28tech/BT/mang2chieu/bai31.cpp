/**
 *    Author: Andrew
 *    Created: 17.05.2024 07:40:24
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
const int N = 1000;

int C[N + 2][N + 2];

void sieve(){
	int k;
	FOR(i,0,N){
		/// C[n][0] = C[n][n] = 1
		C[i][0] = C[i][i] = 1;
		k = i / 2;
		FOR(j,1,k){
			/// CTTH: C[n][k] = C[n][n - k] = C[n - 1][k] + C[n - 1][k - 1];
			C[i][j] = C[i][i - j] = (C[i - 1][j] + C[i - 1][j - 1]) % MOD;
		}
	}
}

void solve(){
	int n,k;
	cin >> n >> k;
	cout << C[n][k] << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    sieve();
    int tc;
    cin >> tc;
    //tc = 1;
    while(tc--){
    	solve();
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/