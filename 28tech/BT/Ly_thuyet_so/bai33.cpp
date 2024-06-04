/**
 *    Author: Andrew
 *    Created: 24.05.2024 08:58:53
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

const int N = 1e6;

string s;
int dd[N + 2];

void tach(){
	int n = (int) s.size();
	for(int i = 0;i < n;i++){
		if (s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7'){
			dd[s[i] - '0']++;
		}
	}
}

void solve(){
	cin >> s;
	tach();
	int n = (int) s.size();
	for(int i = 1; i <= 9;i++){
		if (dd[i] > 0){
			cout << i << " " << dd[i] << '\n';
		}
	}
	cout << '\n';
	for(int i = 0;i < n;i++){
		if (dd[s[i] - '0'] > 0){
			cout << s[i] << " " << dd[s[i] - '0'] << '\n';
			dd[s[i] - '0'] = 0;
		}
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