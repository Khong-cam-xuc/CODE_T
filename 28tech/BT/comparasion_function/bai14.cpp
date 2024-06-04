/**
 *    Author: Andrew
 *    Created: 25.04.2024 06:25:18
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
#define fi first
#define se second

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
typedef vector<pair<int,int>> vii;
typedef vector<vector<int>> vv;

const int N = 1e6;

int a[N + 2];
int ts[N + 2];
int F[N + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int n,q;
    cin >> n >> q;
	FOR(i,1,n) cin >> a[i];
	while(q--){
		int l,r;
		cin >> l >> r;
		++ts[l];
		--ts[r + 1];
	}
	F[1] = ts[1];
	FOR(i,2,n){
		F[i] = F[i - 1] + ts[i];
	}
	sort(a + 1,a + n + 1);
	sort(F + 1,F + n + 1);
	long long ans = 0;
	FOR(i,1,n){
		ans += 1ll * a[i] * F[i];
	}
	cout << ans;
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/