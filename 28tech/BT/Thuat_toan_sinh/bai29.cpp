/**
 *    Author: Andrew
 *    Created: 28.05.2024 06:06:22
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

const int N = 15;

int n;
string s;
bool check = false; // check cau hinh cuoi

void init(){
	FOR(i,1,n){
		s += '(';
	}
}

void sinh(){
	int i = n - 1;
	while(i >= 0 && s[i] == ')'){
		s[i] = '(';
		--i;
	}
	if (i < 0) check = true;
	else s[i] = ')';
}

// kiem tra dau ngoac hop le;
bool kt(){
	int cnt = 0;
	for(auto x : s){
		if (x == ')'){
			if (cnt == 0) return false;
			else --cnt;
		}
		else ++cnt;
	}
	return cnt == 0;
}

void solve(){
	cin >> n;
	init();
	bool kt2 = false; // kiem tra co voi do dai n thi co the tao ra day ngoac dung hay khong
	while(!check){
		if (kt()){
			cout << s << '\n';
			kt2 = true;
		}
		sinh();
	}
	if (!kt2) cout << "NOT FOUND";
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