/**
 *    Author: Andrew
 *    Created: 22.05.2024 05:40:05
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

// Naive Solution

const int N = 2 * 1e5;

int n,k;
ll a[N + 2];
unordered_map<ll,ll> dd;

void solve(){
	cin >> n >> k;
	FOR(i,1,n) cin >> a[i];
	ll res = 0;
	ll curr_sum = 0;
	FOR(i,1,n){
		/// add current element to sum so far
		curr_sum += a[i];
		// If currsum is equal to desired sum,then a new
		if (curr_sum == k) ++res;
		/// find 
		if (dd.find(curr_sum - k) != dd.end()){
			res += (dd[curr_sum - k]);
		}
		// Add currsum value to count of different values of sum
		dd[curr_sum]++;
	}
	cout << res;
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