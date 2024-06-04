/**
 *    Author: Andrew
 *    Created: 24.05.2024 09:50:21
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
int x[N + 2];
bool check = false; // dung de check cau hinh cuoi

void init(){
	FOR(i,1,n){
		x[i] = 8;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && x[i] == 6){
		x[i] = 8;
		--i;
	}
	if (i == 0){
		check = true;
	}
	else{
		x[i] = 6;
	}
}

bool kt(vector<int> v){
	// 2 8;
	//3 6
	int len = (int) v.size();
	if (v[0] == 6 || v[len - 1] == 8) return false;
	int kt_8 = 0;
	int kt_6 = 0;
	for(auto tmp : v){
		if (tmp == 6){
			++kt_6;
			if (kt_6 > 3) return false;
			kt_8 = 0;
		}
		else{
			++kt_8;
			if (kt_8 > 1) return false;
			kt_6 = 0;
		}
	}
	return true;
}

void solve(){
	cin >> n;
	init();
	vvi ans;
	while(!check){
		vector<int> v;
		FOR(i,1,n){
			v.push_back(x[i]);
			// cout << x[i] << " ";
		}
		// cout << '\n';
		if (kt(v)){
			ans.push_back(v);
		}
		sinh();
	}
	sort(ans.begin(),ans.end());
	for(auto tmp : ans){
		for(auto t : tmp){
			cout << t;
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