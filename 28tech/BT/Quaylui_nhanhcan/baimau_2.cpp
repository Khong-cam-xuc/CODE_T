/**
 *    Author: Andrew
 *    Created: 28.05.2024 09:44:39
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

// Bài toán:Cho tập S{1,2,3,...,n}.In ra các tập con có chính xác k phần tử của S.Hai tập con hoán vị của nhau chỉnh tính là một
/// Phân tích:
const int N = 20;

int n,k,s;
int x[N + 2],dd[N + 2];
int cnt = 0;

void tinh(){
	ll sum = 0;
	FOR(i,1,k){
		//cout << x[i] << " ";
		sum += x[i];
	}
	//cout << '\n';
	if (sum == s) ++cnt;
}

// To hop chap k cua n
void Try(int i){
	// ta lay tu x truoc do
	FOR(j,x[i - 1] + 1,n){
		if (dd[j] == 0){
			x[i] = j;
			dd[j] = 1;
			if (i == k){
				tinh();
			}
			else{
				Try(i + 1);
			}
			// Xoa danh dau sau khi da quay lui
			dd[j] = 0;
		}
	}
	
}

void solve(){
	cin >> n >> k >> s;
	Try(1);
	cout << cnt;
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