/**
 *    Author: Andrew
 *    Created: 27.05.2024 07:30:15
**/
#include <bits/stdc++.h>
#pragma GCC target("popcnt,lzcnt,bmi,bmi2,abm")

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

const int N = 1000;

// So loc phat la so chu so chan va thoa man tinh chat doi xung
//Tim 1000 so loc phat dau tien
/// Cau hoi: Bao nhieu so 6 va/ hoac 8 de co the Liet ke duoc het 1000 so loc phat
/// 18 so

int n;
int x[N + 2];
bool check = false; // check cau hinh cuoi

// Khoi tao cau hinh dau tien
void init(){
	FOR(i,1,n / 2){
		x[i] = 6;
	}
}

// Try voi n bat ki 
/// Sinh ra cau hinh tiep theo tu cau hinh hien tai

void sinh(){
	int i = n / 2;
	while(i >= 1 && x[i] == 8){
		x[i] = 6;
		--i;
	}
	if (i == 0) check = true;
	else x[i] = 8;
}

// // Xau nguoc
// string rev(string s){
// 	reverse(s.begin(),s.end());
// 	return s;
// }

void solve(){
	int m;
	cin >> m;
	n = 18;
	init();
	set<ll> se;
	while(!check){
		string s = "";
		FOR(i,1,n / 2){
			s += to_string(x[i]);
			string tmp = s;
			reverse(tmp.begin(),tmp.end());
			ll num = stoll(s + tmp);
			se.insert(num);
		}	
		sinh();
	}
	for(auto tmp : se){
		if (m <= 0) return;
		cout << tmp << " ";
		--m;
	}
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
    return (0);
}

/**"Genius is 1% talent and 99% percent hard work"**/