/**
 *    Author: Andrew
 *    Created: 19.05.2024 03:40:16
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
int a[N + 2],dd[N + 2];/// dung de danh dau cac chu so

void danh_dau(int x){
	while(x > 0){
		int r = x % 10;
		dd[r] = 1;
		x /= 10;
	}
}

void solve(){
	cin >> n;
	FOR(i,1,n){
		cin >> a[i];
	}
	FOR(i,1,n){
		danh_dau(a[i]);
	}
	FOR(i,0,9){
		if (dd[i] > 0){
			cout << i << " ";
		}
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