/**
 *    Author: Andrew
 *    Created: 26.05.2024 10:51:08
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

const int N = 15;

int n;
int x[N + 2];
bool check = false; // check cau hinh cuoi

// Sinh cau hinh nhi phan tiep theo
void sinh(){
	int i = n / 2;
	while(i >= 1 && x[i] == 1){
		x[i] = 0;
		--i;
	}
	if (i == 0) check = true;
	else x[i] = 1;
}

void solve(){
	cin >> n;
	if (n % 2 == 0){
		while(!check){
			FOR(i,1,n / 2) cout << x[i];
			FOD(i,n / 2,1) cout << x[i];
			cout << '\n';
			sinh();
		}
	}
	else{
		while(!check){
			FOR(mid,0,1){
				FOR(i,1,n / 2) cout << x[i];
				cout << mid;
				FOD(i,n/ 2,1) cout << x[i];
				cout << '\n';
			}
			sinh();
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