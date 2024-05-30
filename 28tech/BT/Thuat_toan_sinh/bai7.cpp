/**
 *    Author: Andrew
 *    Created: 22.05.2024 08:55:53
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

const int N = 20;

int n;
int x[N + 2];
bool check = false; // dung de check cau hinh cuoi cung

void init(){
	FOR(i,1,n){
		x[i] = i;
	}
}


void solve(){
	cin >> n;
	cin.ignore();
	string s;
	getline(cin,s);
	stringstream ss(s);
	string word;
	vector<string> ten;
	while(ss >> word){
		ten.push_back(word);
	}
	sort(ten.begin(),ten.end());
	init();
	do{
		FOR(i,0,n - 1){
			cout << ten[x[i]] << " ";
		}
		cout << '\n';
	}while(next_permutation(x,x + n));
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