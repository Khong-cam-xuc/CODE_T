/**
 *    Author: Andrew
 *    Created: 24.05.2024 09:14:10
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


int x[N + 2];
bool check = false; // check cau hinh cuoi cung
int n;

void init(){
	x[n] = 1;
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
	init();
	vvi ans;
	while(!check){
		vector<int> v;
		FOR(i,1,n){
			if (x[i] == 1){
				v.push_back(i);
			}
		}
		ans.push_back(v);
		sinh();
	}
	sort(ans.begin(),ans.end());
	for(auto tmp : ans){
		for(auto t : tmp){
			cout << t << " ";
		}
		cout << '\n';
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