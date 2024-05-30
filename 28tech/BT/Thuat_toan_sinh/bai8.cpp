/**
 *    Author: Andrew
 *    Created: 22.05.2024 09:38:06
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

const int N = 10;

int n;
int x[N + 2],a[N + 2];
bool check = false; // check cau hinh cuoi

void init(){
	FOR(i,1,n){
		x[i] = i;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && x[i] > x[i + 1]){
		--i;
	}
	if (i == 0){
		check = true;
	}
	else{
		int j = n;
		while(x[i] > x[j]) --j;
		swap(x[i],x[j]);
		reverse(x + i + 1,x + n + 1);
	}
}

void solve(){
	cin >> n;
	FOR(i,1,n) cin >> a[i];
	init();
	int cnt = 0;
	while(!check){
		++cnt;
		bool check2 = true;
		FOR(i,1,n){
			if (a[i] != x[i]){
				check2 = false;
			}
		}
		if (check2) return (void) (cout << cnt);
		sinh();
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