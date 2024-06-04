/**
 *    Author: Andrew
 *    Created: 22.05.2024 07:53:31
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

int a[N + 2];

void solve(){
	int n,k;
	cin >> n >> k;
	FOR(i,1,n) cin >> a[i];
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		--i;
	}
	if (i == 0){
		FOR(j,1,k){
			a[j] = j;
		}
	}
	else{
		a[i]++;
		FOR(j,i + 1,k){
			a[j] = a[j - 1] + 1; 
		}
	}
	FOR(t,1,k){
		cout << a[t] << " ";
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