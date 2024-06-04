/**
 *    Author: Phan Duc Phuc
 *    Created: 23.04.2024 09:00:11
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

int sl_chan(int x){
	int cnt = 0;
	while(x > 0){
		int du = x % 10;
		if (du % 2 == 0) ++cnt;
		x /= 10;
	}
	return cnt;
}

int sl_le(int x){
	int cnt = 0;
	while(x > 0){
		int du = x % 10;
		if (du & 1) ++cnt;
		x /= 10;
	}
	return cnt;
}


bool cmp2(int x,int y){
	return (sl_le(x) < sl_le(y));
}

bool cmp(int &x,int &y){
	if (sl_chan(x) != sl_chan(y)){
		return (sl_chan(x) < sl_chan(y));
	}
	return x < y;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int n;cin >> n;
    int a[n] = {0},b[n] = {0};
    for(int i = 0;i < n;i++){
    	int x;cin >> x;
    	a[i] = x;
    	b[i] = x;
    }
    ///Yeu cau 1
    sort(a,a + n,cmp);
    for(int x : a) cout << x << " ";
    cout << "\n";
	/// Yeu cau 2 Theo thu tu xuat hien dung stable_sort
	stable_sort(b,b + n,cmp2);
	for(int x : b) cout << x << " ";
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/