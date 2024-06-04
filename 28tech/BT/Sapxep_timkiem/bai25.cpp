/**
 *    Author: Andrew
 *    Created: 19.05.2024 04:07:41
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

int n;

void solve(){
	cin >> n;
	vii a;
	FOR(i,1,n){
		int x,y;
		cin >> x >> y;
		a.push_back({x,y});
	}
	sort(a.begin(),a.end());
	ll ans = a[0].fi + a[0].se;
	FOR(i,1,n - 1){
		// Lay thoi gian tiep theo cong vao neu no lon hon hoac bang tgian den
		if (a[i].fi >= ans){
			ans = a[i].se  + a[i].fi;
		}
		/// cong thoi gian sau vao neu nho hon tgian den
		else{
			ans += a[i].se;
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