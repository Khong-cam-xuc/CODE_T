/**
 *    Author: Andrew
 *    Created: 19.05.2024 03:45:34
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
int a[N + 2];
map<int,int> mp;

bool cmp(pii x,pii y){
	if (x.se != y.second){
		return (x.se > y.se);
	}
	return x.first < y.first;
}

bool cmp2(pii x,pii y){
	return x.second > y.second;
}

void solve(){
	cin >> n;
	FOR(i,1,n){
		cin >> a[i];
		mp[a[i]]++;
	}
	vii v(mp.begin(),mp.end());
	sort(v.begin(),v.end(),cmp);
	for(auto [x,y] : v){
		FOR(i,1,y){
			cout << x << " ";
		}
	}
	cout << '\n';
	vii v2;
	FOR(i,1,n){
		if (mp[a[i]] > 0){
			v2.push_back({a[i],mp[a[i]]});
			mp[a[i]] = 0;
		}
	}
	stable_sort(v2.begin(),v2.end(),cmp2);
	for(auto [x,y] : v2){
		FOR(i,1,y){
			cout << x << " ";
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