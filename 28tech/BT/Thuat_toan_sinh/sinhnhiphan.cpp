/**
 *    Author: Andrew
 *    Created: 24.05.2024 06:40:57
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

int n,k;
int x[N + 2];
bool check = false;

void init(){
	FOR(i,1,n){
		x[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && x[i] == 1){
		x[i] = 0;
		--i;
	}
	if (i == 0){
		check = true;
	}
	else{
		x[i] = 1;
	}
}

/// kiem tra cau hinh do du k phan tu hay chua
bool kt1(vector<int> v){
	int dem = 0;
	for(auto tmp : v){
		dem += tmp;
	}
	return (dem == k ? true : false);
}

// Kiem tra cau hinh do dai k lien tiep hien tai 

bool kt2(vector<int> v){
	bool check2 = false;
	int dem = 0; // dem sl so 1 lien tiep
	for(auto tmp : v){
		if (tmp == 1){
			++dem;
		}
		else{
			if (dem > k) return false;
			if (dem == k){
				if (check2) return false;
				check2 = true;
			}
			dem = 0;
		}
	}
	if (dem > k) return false;
	if (dem == k){
		if (check2) return false;
		return true;
	}
	return (check2 ? true : false);
}

void solve(){
	cin >> n >> k;
	vvi ans;
	while(!check){
		vector<int> v;
		FOR(i,1,n){
			v.push_back(x[i]);
		}
		// check conditions the first and print configuradition
		if (kt1(v)){
			for(auto tmp : v){
				cout << tmp;
			}
			cout << " ";
		}
		// check conditions the second
		if (kt2(v)){
			ans.push_back(v);
		}
		// generate the next configuraditon
		sinh();
	}
	cout << '\n';
	// print configuraditon 
	for(auto tmp : ans){
		for(auto s : tmp){
			cout << s;
		}
		cout << " ";
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