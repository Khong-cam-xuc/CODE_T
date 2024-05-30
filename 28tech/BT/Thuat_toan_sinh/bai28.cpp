/**
 *    Author: Andrew
 *    Created: 28.05.2024 05:32:50
**/
#include <bits/stdc++.h>
//#pragma GCC target("popcnt,lzcnt,bmi,bmi2,abm")

using namespace std;

#ifdef Andrew
#include "debug.h"
#else
#define debug(x...) 44
#endif

#define TIME (1.0 * clock()/ CLOCKS_PER_SEC)
#define FOR(i,a,b) for(int i = (a);i <= (b);++i)
#define FOD(i,b,a) for(int i = (b);i >= (a);--i)
#define REP(i,a,b) for(int i = (a) ;i < (b);++i)
#define FILE(NAME) if (fopen(NAME".inp","r")){ freopen(NAME".inp","r",stdin);freopen(NAME".out","w",stdout);}
#define ALL(x) ((x).first,(x).second)
#define fi first
#define se second

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vii;
typedef vector<vector<int>> vvi;

const int N = 4;

int n;
int x[N + 2];
bool check = false;

void sinh(){
	int i = 3;
	while(i >= 1 && x[i] == 1){
		x[i] = 0;
		--i;
	}
	if (i == 0) check = true;
	else x[i] = 1;
}

void solve(){
	vector<ll> v;
	ll tmp;
	while(cin >> tmp){
		v.push_back(tmp);
	}
	ll ans = 0;
	while(!check){
		ll sum = v[0];
		FOR(i,1,3){
			if (x[i] == 1){
				sum += v[i];
			}
			else sum -= v[i];
		}
		ans = max(ans,sum);
		sinh();
	}
	cout << ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    FILE("/TASK");
    int TC;
    //cin >> TC;
    TC = 1;
    while(TC--){
    	solve();
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/