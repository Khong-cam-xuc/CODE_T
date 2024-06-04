/**
 *    Author: Andrew
 *    Created: 28.05.2024 05:12:31
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

const int N = 10;

int n;
int x[N + 2];
bool check = false; // check cau hinh cuoi cung

// KHoi tao cau hinh dau tien
void init(){
	FOR(i,1,n){
		x[i] = i;
	}
}

//Sinh Cau hinh tiep theo
void sinh(){
	int i = n - 1;
	while(i >= 1 && x[i] > x[i + 1]){
		--i;
	}
	if (i == 0) check = true;
	else{
		int j = n;
		while(x[i] > x[j]) --j;
		swap(x[i],x[j]);
		reverse(x + i + 1,x + n + 1);
	}
}

// Function check: khong co hai so lien ke nhau o canh nhau
bool kt(){
	//bool check2 = true; // Dung de kiem tra xem ca mang hien tai co hop le hay khong
	FOR(i,2,n - 1){
		if ((abs(x[i] - x[i - 1]) <= 1 || abs(x[i] - x[i + 1]) <= 1)) return false;
	}
	return true;
}

void solve(){
	cin >> n;
	init();
	while(!check){
		if (kt()){
			FOR(i,1,n){
				cout << x[i];
			}
			cout << '\n';
		}
		sinh();
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