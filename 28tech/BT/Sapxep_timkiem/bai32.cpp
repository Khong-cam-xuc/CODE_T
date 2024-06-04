/**
 *    Author: Andrew
 *    Created: 19.05.2024 06:51:05
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

const int N = 1e5;

int n,m;
int a[N + 2],b[N + 2];

void solve(){
	cin >> n >> m;
	FOR(i,1,n) cin >> a[i];
	FOR(i,1,m) cin >> b[i];
	sort(a + 1, a + n + 1);
	sort(b + 1, b + m + 1);
	int l = 1,r = 1;
	ll cnt = 0;
	while(l <= n && r <= m){
		if (abs(a[l] - b[r]) <= 1){
			++l;
			++r;
			++cnt;
		}
		else if (a[l] > b[r]){
			++r;
		}
		else ++l;
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