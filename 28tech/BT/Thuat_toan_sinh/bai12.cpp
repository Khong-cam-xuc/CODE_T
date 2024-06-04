/**
 *    Author: Andrew
 *    Created: 23.05.2024 11:54:13
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

int n,k,cnt; // dem so 1
int x[N + 2];
bool check = false; // check cau hinh cuoi

// da check
void init(){
	FOR(i,1,n){
		/// cho 3 bit cuoi la 1
		if (n - k < i){
			x[i] = 1;
		}
		else x[i] = 0;
	}
	// in ra cau hinh dau tien
	cnt = k;
}

void sinh(){
	int i = n;
	while(i >= 1 && x[i] == 1){
		x[i] = 0;
		--i;
	}
	// cau hinh tiep
	if (i != 0){
		x[i] = 1;
	}
	// check no co phai la cau hinh cuoi hay chua
	FOR(j,1,k){
		if (x[j] == 1) ++cnt;
	}
	// cau hinh cuoi khi cnt == k;
	if (cnt == k){
		check = true;
		return;
	}
	FOR(j,k + 1,n){
		if (x[j] == 1) ++cnt;
	}
}

// Ham dung de kiem tra  ma chi duy nhat k bit 1 lien tiep trong vector
bool kt(vector<int> v){
	bool check2 = false; // dung de check chi duy nhat co k phan tu lien tiep hay khong
	int cnt2 = 0; /// dem so so 1 lien tiep
	int m = (int) v.size();
	REP(i,1,m){
		if (v[i] == 1) ++cnt2;
		else{
			// so luong so 1 lon hon k
			if (cnt2 > k) return false;
			if (cnt2 == k){
				// gap them phan tu bang k
				if (check2) return false;
				check2 = true;
			}
			// reset
			cnt2 = 0;
		}
	}
	if (cnt2 > k) return false;
	if (cnt2 == k){
		// gap them phan tu bang k
		if (check2) return false;
		check2 = true;
	}
	return (check2 ? true : false);
}	

void solve(){
	// cin >> n >> k;
	// if (n == k || n < k){
	// 	FOR(i,1,n){
	// 		cout << 1 << " ";
	// 	}
	// 	cout << '\n';
	// 	FOR(i,1,n){
	// 		cout << 1 << " ";
	// 	}
	// 	return;
	// }
	// init();
	// vvi ans;
	// while(!check){
	// 	// check no bang co du k so 1 hay kh
	// 	vector<int> v;
	// 	if (cnt == k){
	// 		FOR(i,1,n){
	// 			v.push_back(x[i]);
	// 			cout << x[i];
	// 		}
	// 		cout << " ";
	// 		if (kt(v)) ans.push_back(v);
	// 	}
	// 	cnt = 0; // reset lai cnt
	// 	sinh();
	// }
	// vector<int> v;
	// FOR(i,1,n){
	// 	cout << x[i];
	// 	v.push_back(x[i]);
	// }
	// cout << '\n';
	// ans.push_back(v);
	// for(auto tmp : ans){
	// 	for(auto t : tmp){
	// 		cout << t;
	// 	}
	// 	cout << " ";
	// }

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