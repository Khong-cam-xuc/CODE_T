/**
 *    Author: Andrew
 *    Created: 28.05.2024 02:21:56
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

const int N = 5;

int n;
int x[N + 2];
bool check = false; // check cau hinh cuoi cung

// Khoi tao cau hinh dau tien cho hoan vi
void init(){
	FOR(i,1,n){
		x[i] = 1;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && x[i] == n){
		--i;
	}
	if (i == 0) check = true;
	else{
		x[i]++;
		FOR(j,i + 1,n){
			x[j] = 1;
		}
	}
}

void solve(){
	cin >> n;
	//string s;
	init();
	vector<string> v;
	while(!check){
		string tmp;
		FOR(i,1,n){
			tmp += to_string(x[i]);
		}
		v.push_back(tmp);
		sinh();
	}
	string s;
	FOR(i,0,n - 1){
		s += (char)('A' + i);
	}
	do{
		for(auto tmp : v){
			cout << s;
			cout << tmp << "\n";
		}
	}while(next_permutation(s.begin(),s.end()));
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