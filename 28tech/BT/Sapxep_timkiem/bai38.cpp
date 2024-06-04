/**
 *    Author: Andrew
 *    Created: 22.05.2024 12:12:30
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

const int N = 2 * 1e5;

int n;

bool cmp(pii x,pii y){
	return (x.se < y.se);
}

void solve(){
	cin >> n;
	vii v;
	FOR(i,1,n){
		int x,y;
		cin >> x >> y;
		v.push_back({x,y});
	}
	sort(v.begin(),v.end(),cmp);
	ll cnt = 1,end_time = v[0].se;
	FOR(i,1,n - 1){
		if (end_time <= v[i].fi){
			++cnt;
			end_time = v[i].se;
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