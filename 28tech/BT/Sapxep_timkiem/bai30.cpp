/**
 *    Author: Andrew
 *    Created: 19.05.2024 06:13:27
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

int n,l;
double a[N + 2];

void solve(){
	cin >> n >> l;
	FOR(i,1,n) cin >> a[i];
	sort(a + 1,a + n + 1);
	double ans = 0;
	// truong hop khong co den long 0
	if (a[1] > 0){
		ans = max(ans, a[1] - 0);
	}
	// truong hop khong co den long 15
	if (a[n] < l){
		ans = max(ans,l - a[n]);
	}
	FOR(i,2,n){
		// tim ban kinh
		ans = max(ans,(a[i] - a[i - 1]) / 2);
	}
	cout << fixed << setprecision(10) << ans;
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