/**
 *    Author: Andrew
 *    Created: 13.05.2024 05:42:51
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

const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int N = 1e6;


void solve(){
	string s,t;
	cin >> s >> t;
	int n = (int)s.size();
	int m = (int)t.size();
	if (n < m) return (void) (cout << "-1");
	map<char,int> cT,cS; /// So luong ki tu khac xau cua xau t va s
	REP(i,0,m){
		cT[(int)t[i]]++;
	}
	int l = 0,ans = 1e9,l2 = -1;
	ll cnt = 0; /// Dem so phan tu trong xau t va xau s;
	REP(r,0,n){
		++cS[s[r]];
		if (cS[s[r]] <= cT[s[r]]) ++cnt; // so luong phan tu khac nhau
		if (cnt == m){
			// Da day du ta se thuc hien thu hep lai
			while((cS[s[l]] > cT[s[l]]) || (cT[s[l]] == 0)){
				if (cS[s[l]] > cT[s[l]]){
					--cS[s[l]];
				}
				++l;
			}
			if (ans > r - l + 1){
				l2 = l;
				ans = r - l + 1;
			}
		}

	}
	if (l2 == -1){
		return (void) (cout << -1);
	}
	string res = s.substr(l2,ans);
	cout << res;
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