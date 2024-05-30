/**
 *    Author: Andrew
 *    Created: 21.05.2024 09:43:07
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

int n,m;
ll h[N + 2];// Gia cua tung ve va gia toi da cua moi khach hang

void solve(){
	cin >> n >> m;
	multiset<ll> ms;
	FOR(i,1,n){
		ll x;cin >> x;
		ms.insert(x);
	}
	FOR(i,1,m) cin >> h[i];
	
	FOR(i,1,m){
		auto it = ms.upper_bound(h[i]);
		if (it == ms.begin()){
			cout << -1 << '\n';
			continue;
		}
		--it; // <= gan nhat
		cout << *it << '\n';
		ms.erase(it);
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