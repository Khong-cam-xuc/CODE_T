/**
 *    Author: Andrew
 *    Created: 29.05.2024 12:58:07
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
int a[N + 2][N + 2];
string s = "";
void Try(int x,int y){
	// Truong hop co so
	if (x == n && y == n){
		cout << s << "\n";
		return;
	}
	// Phan de quy
	if (x + 1 <= n && a[x + 1][y] == 1){
		s += "D";
		Try(x + 1,y);
		s.pop_back();
	}
	if (y + 1 <= n && a[x][y + 1] == 1){
		s += "R";
		Try(x,y + 1);
		s.pop_back();
	}
}

void solve(){
	cin >> n;
	FOR(i,1,n){
		FOR(j,1,n){
			cin >> a[i][j];
		}
	}
	Try(1,1);
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