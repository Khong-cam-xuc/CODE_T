/**
 *    Author: Andrew
 *    Created: 18.05.2024 11:46:43
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

int n;
int a[N + 2];

int first_pos(int x){
	int ans = -1;
	int l = 1,r = n;
	while(l <= r){
		int mid = (l + r) >> 1;
		if (a[mid] == x){
			ans = mid;
			r = mid - 1;
		}
		else if (a[mid] < x){
			l = mid + 1;
		}
		else r = mid - 1;
	}
	return ans;
}

int last_pos(int x){
	int ans = -1;
	int l = 1,r = n;
	while(l <= r){
		int mid = (l + r) >> 1;
		if (a[mid] == x){
			ans = mid;
			l = mid + 1;
		}
		else if (a[mid] < x){
			l = mid + 1;
		}
		else r = mid - 1;
	}
	return ans;
}


void solve(){
	int x;
	cin >> n >> x;
	FOR(i,1,n)cin >> a[i];
	//1;
	if (first_pos(x) == -1){
		cout << -1 << '\n';
		cout << -1 << '\n';
	}
	else{
		cout << first_pos(x) - 1<< '\n';
		//2;
		cout << last_pos(x) - 1<< '\n';
	}
	//3;
	auto it = lower_bound(a + 1,a + n + 1,x);
	if (it == a + n + 1){
		cout << -1 << '\n';
		cout << -1 << '\n';
	}
	else{
		cout << it - a - 1<< '\n';
		auto it2 = upper_bound(a + 1,a + n + 1,x);
		if (it2 != a + n + 1){
			cout << it2 - a - 1 << '\n';
		} 
		else cout << -1 << '\n';
	}
	// 5;
	if (first_pos(x) == -1){
		cout << 0 << '\n';
	}
	else cout << last_pos(x) - first_pos(x) + 1 << '\n';
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