/**
 *    Author: Andrew
 *    Created: 25.05.2024 10:44:23
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

const int N = 10;

string s;
int n;
vector<char> x;
bool check = false; /// check cau hinh cuoi


void solve(){
	cin >> s;
	sort(s.begin(),s.end());
	n = (int)s.size();
	// sap xep lai
	x.push_back(s[0]);
	FOR(i,1,n - 1){
		if (s[i] != s[i - 1]) x.push_back(s[i]);
	}
	vector<vector<char>> ans;
	do{
		ans.push_back(x);
	}while(next_permutation(x.begin(),x.end()));
	for(auto tmp : ans){
		for(auto t : tmp){
			cout << t;
		}
		cout << '\n';
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