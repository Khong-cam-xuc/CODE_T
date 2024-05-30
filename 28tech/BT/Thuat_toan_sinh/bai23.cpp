/**
 *    Author: Andrew
 *    Created: 27.05.2024 08:41:29
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
int a[N + 2];

void solve(){
	cin >> n;
	FOR(i,1,n){
		cin >> a[i];
	}
	// Loc cac phan tu khac nhau
	set<int> se(a + 1,a + n + 1);
	vector<int> x(se.begin(),se.end());
	// tao set luu ket qua
	set<vector<int>,greater<vector<int>>> ans;
	do{
		ans.insert(x);
	}while(next_permutation(x.begin(),x.end()));
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