/**
 *    Author: Andrew
 *    Created: 19.05.2024 02:21:05
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

const int N = 1e6;
vii cv;

bool cmp(pii x,pii y){
	return (x.se < y.se);
}

void solve(){
	int n;cin >> n;
	pii a[n];
	FOR(i,1,n){
		cin >> a[i].fi >> a[i].se;
	}
	sort(a + 1,a + n + 1,cmp);
	int cnt = 1;
	int end_time = a[1].second;
	FOR(i,2,n){
		if (a[i].first >= end_time){
			end_time = a[i].second;
			++cnt;
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