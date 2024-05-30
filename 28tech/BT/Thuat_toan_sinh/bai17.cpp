/**
 *    Author: Andrew
 *    Created: 26.05.2024 09:28:58
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
bool check =  false; // check hoan vi cuoi


void sinh(){
	int n = (int)s.size();
	int i = n - 2;
	while(i >= 0 && s[i] >= s[i + 1]){
		--i;
	}
	if (i < 0){
		check = true;
	}
	else{
		int j = n - 1;
		while(s[i] >= s[j]) --j;
		swap(s[i],s[j]);
		reverse(s.begin() + i + 1,s.begin() + n);
	}
}

void solve(){
	cin >> s;
	sinh();
	if (check){
		cout << "NOT EXIST";
	}
	else{
		cout << s;
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