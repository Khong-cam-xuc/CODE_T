/**
 *    Author: Phan Duc Phuc
 *    Created: 24.04.2024 11:21:08
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
typedef pair<int,int> pii;

bool cmp(pii &x,pii &y){
	long long khoang_cach1 = (x.first * x.first + x.second * x.second);
	long long khoang_cach2 = (y.first * y.first + y.second * y.second);
	if (khoang_cach1 != khoang_cach2){
		return khoang_cach1 < khoang_cach2;
	}
	else{
		if (x.first != y.first) return x.first < y.first;
		return x.second < y.second;
	}
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    for(int i = 1; i <= n;i++){
    	int x,y;
    	cin >> x >> y;
    	v.push_back({x,y});
    }
    sort(v.begin(),v.end(),cmp);
    for(auto x : v){
    	cout << x.first << " " << x.second << '\n';
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/