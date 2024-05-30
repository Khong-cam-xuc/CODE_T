/**
 *    Author: Andrew
 *    Created: 28.05.2024 06:34:05
**/
#include <bits/stdc++.h>
//#pragma GCC target("popcnt,lzcnt,bmi,bmi2,abm")

using namespace std;

#ifdef Andrew
#include "debug.h"
#else
#define debug(x...) 44
#endif

#define TIME (1.0 * clock()/ CLOCKS_PER_SEC)
#define FOR(i,a,b) for(int i = (a);i <= (b);++i)
#define FOD(i,b,a) for(int i = (b);i >= (a);--i)
#define REP(i,a,b) for(int i = (a) ;i < (b);++i)
#define FILE(NAME) if (fopen(NAME".inp","r")){ freopen(NAME".inp","r",stdin);freopen(NAME".out","w",stdout);}
#define ALL(x) ((x).first,(x).second)
#define fi first
#define se second

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vii;
typedef vector<vector<int>> vvi;

const int N = 15;
const int MAX = 200;

int n,s;
int x[N + 2],w[MAX + 2],v[200];
bool check = false; // check cau hinh cuoi cung

void init(){
	x[n] = 1;
}

void sinh(){
	int i = n;
	while(i >= 1 && x[i] == 1){
		x[i] = 0;
		--i;
	}
	if (i == 0) check = true;
	else x[i] = 1;
}

void solve(){
	cin >> n >> s;
	FOR(i,1,n) cin >> w[i];
	FOR(i,1,n) cin >> v[i];
	init();
	ll max_coin = 0;
	while(!check){
		ll tl = 0,coin = 0;
		FOR(i,1,n){
			tl += (x[i] * w[i]);
			if (tl > s) break;
			coin += (x[i] * v[i]);
		}
		// Thoa man dieu kien trong luong luon <= s;
		max_coin = max(max_coin,coin);
		sinh();
	}
	cout << max_coin;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    FILE("/TASK");
    int TC;
    //cin >> TC;
    TC = 1;
    while(TC--){
    	solve();
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/