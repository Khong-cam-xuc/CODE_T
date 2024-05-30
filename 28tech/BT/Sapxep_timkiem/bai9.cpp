/**
 *    Author: Andrew
 *    Created: 18.05.2024 11:41:09
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

int n,q;
int a[N + 2];

int find_x(int x){
	int ans = -1;
	int l = 1,r = n;
	while(l <= r){
		int mid = (l + r) >> 1;
		if (a[mid] == x){
			ans = mid;
			break;
		}
		else if (a[mid] < x){
			l = mid + 1;
		}
		else r = mid - 1;
	}
	return ans;
}

void solve(){
	cin >> n;
	FOR(i,1,n) cin >> a[i];
	sort(a + 1, a + n + 1);
	cin >> q;
	while(q--){
		int x;cin >> x;
		if (find_x(x) != -1){
			cout << "YES\n";
		}
		else cout << "NO\n";
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