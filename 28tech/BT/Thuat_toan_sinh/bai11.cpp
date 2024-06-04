/**
 *    Author: Andrew
 *    Created: 23.05.2024 11:05:29
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

int n,cnt; /// cnt la so luong so trong mang sau khi da phan tich
int x[N + 2];
bool check = false; // dung de check cau hinh cuoi

void init(){
	cnt = 1;
	x[1] = n;
}

void sinh(){
	int i = cnt;
	while(i >= 1 && x[i] == 1){
		--i;
	}
	//2TH
	if (i == 0){
		// da toi cau hinh cuoi cung;
		check = true;
	}
	else{
		// x[i] != 1;
		// giam x[i] di 1 don vi
		--x[i];
		int so_1 = cnt - i + 1; // so luong so 1 da bo qua
		cnt = i; // so luong so hien tai;
		int them = so_1 / x[i];
		int du = so_1 % x[i];
		if (them != 0){
			FOR(j,1,them){
				++cnt;
				x[cnt] = x[i];
			}
		}
		// them so du con lai vao
		if (du != 0){
			++cnt;
			x[cnt] = du;
		}
	}
}

void solve(){
	cin >> n;
	init();
	ll ans = 0;
	vvi res;
	while(!check){
		++ans;
		vector<int> tmp;
		FOR(i,1,cnt){
			tmp.push_back(x[i]);
		}
		res.push_back(tmp);
		sinh();
	}
	cout << ans << '\n';
	for(auto tmp : res){
		REP(i,0,(int)tmp.size() - 1){
			cout << tmp[i] << "+";
		}
		cout << tmp[tmp.size() - 1] << '\n';
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