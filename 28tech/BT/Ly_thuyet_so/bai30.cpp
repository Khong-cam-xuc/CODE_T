/**
 *    Author: Andrew
 *    Created: 13.05.2024 09:31:52
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
const int N = 1e7;

int F[N + 2];

void sieve(int n){
	fill(F,F + n,1);
	F[0] = 0;
	F[1] = 0;
	for(int i = 2;i * i <= N;i++){
		if (F[i]){
			for(int j = i * i;j <= N;j += i){
				F[j] = 0;
			}
		}
	}
}

void solve(){
	int n;cin >> n;
	sieve(n);
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