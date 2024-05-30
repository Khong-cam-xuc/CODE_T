/**
 *    Author: Andrew
 *    Created: 26.05.2024 11:36:30
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
#define ALL(x) ((x).first,(x).second)
#define fi first
#define se second

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vii;
typedef vector<vector<int>> vvi;

const int N = 1e6;

int n;
int x[N + 2];
bool stop = false; // check cau hinh cuoi

// Khoi tao cau hinh dau tien
void init(){
	FOR(i,1,n / 2){
		x[i] = 0;
	}
}

// Sinh cau hinh toi n / 2 voi n chan
void sinh(){
	int i = n / 2;
	while(i >= 1 && x[i] == 1){
		x[i] = 0;
		--i;
	}
	if (i == 0) stop = true;
	else x[i] = 1;
}

// check dx
bool kt(string s){
	int l = 0,r = (int) s.size() - 1;
	while(l < r){
		if (s[l] != s[r]) return false;
		++l;
		--r;
	}
	return true;
}

// tao dx
string rev(string s){
	reverse(s.begin(),s.end());
	return s;
}

void solve(){
	cin >> n;
	init();
	set<string> se;
	// if (n % 2 == 0){
		while(!stop){
			string s = "";
			FOR(i,1,n / 2){
				s += to_string(x[i]);
				/// Sinh xau doi xung
				// Nx: Xau khong phai la xau dx cung co the tao duoc xau doi xung
				string tmp = s + rev(s);
				if (tmp.size() % 2 == 0){
					se.insert(tmp);
				}
			}
			sinh();
		}
		// in
		for(auto tmp : se){
			cout << tmp << "\n";
		}
	//}
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