/**
 *    Author: Andrew
 *    Created: 22.05.2024 10:52:31
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

const int N = 20;

int n;
int a[N + 2],x[N + 2];
bool check = false;

void init(){
	FOR(i,1,n){
		x[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && x[i] == 1){
		x[i] = 0;
		--i;
	}
	if (i == 0){
		check = true;
	}
	else{
		x[i] = 1;
	}
}

void solve(){
	cin >> n;
	//return ;
	FOR(i,1,n) cin >> a[i];
	init();
	ll ans = 1e18 + 7;
	while (!check){
		ll s1 = 0,s2 = 0;
		FOR(i,1,n){
			if (x[i] == 1) s1 += a[i];
			else s2 += a[i];
		}
		ans = min(ans,abs(s1 - s2));
		sinh();
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