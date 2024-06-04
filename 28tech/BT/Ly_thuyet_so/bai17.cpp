/**
 *    Author: Andrew
 *    Created: 06.05.2024 10:18:43
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

int tsnt(int n){
	vector<int> v;
	for(int i = 2; i * i <= n;i++){
		if (n % i == 0){
			while(n % i == 0){
				v.push_back(i);
				n /= i;
			}
		}
	}
	if (n > 1) v.push_back(n);
	return (v[v.size() - 1]);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	cout << tsnt(n) << '\n';
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/