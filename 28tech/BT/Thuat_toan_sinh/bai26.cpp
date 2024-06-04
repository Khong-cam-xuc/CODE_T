/**
 *    Author: Andrew
 *    Created: 28.05.2024 03:18:43
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

const int N = 10;

int n;
char x[N + 2];
char c;
bool check = false;

void init(){
	FOR(i,1,30){
		x[i] = (char)('A' + i - 1);
		if (x[i] == c){
			n = i;
			break;
		}
	}
}

void sinh(){
	int i = n - 1;
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

bool kt(){
	if (n <= 4){
		if (x[1] == 'A' || x[n] == 'A') return true;
		return false;
	}
	else{
		if (x[1] == 'A' && x[n] == 'E') return true;
		if (x[1] == 'E' && x[n] == 'A') return true;
		FOR(i,1,n - 1){
			if (x[i] == 'A' && x[i + 1] == 'E') return true;
			if (x[i] == 'E' && x[i + 1] == 'A') return true;
		}
		return false;
	}
}

void solve(){
	cin >> c;
	init();
	while(!check){
		if (kt()){
			//string s = "";
			FOR(i,1,n){
				cout << x[i];
			}
			cout << '\n';
		}
		sinh();
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
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/