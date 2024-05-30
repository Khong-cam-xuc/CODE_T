/**
 *    Author: Andrew
 *    Created: 21.05.2024 11:57:49
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

void solve(){
	cin >> n;
	map<int,int> mp;
	FOR(i,1,n){
		int x,y;
		cin >> x >> y;
		mp[x] = 1;
		mp[y] = -1;
	}
	vii ans(mp.begin(),mp.end());
	sort(ans.begin(),ans.end());
	ll mx_el = 0;
	ll sum = 0;
	for(auto x : ans){
		sum += x.second;
		mx_el = max(mx_el,sum);
	}
	cout << mx_el;
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