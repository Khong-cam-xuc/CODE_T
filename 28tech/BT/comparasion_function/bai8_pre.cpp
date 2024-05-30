/**
 *    Author: Andrew
 *    Created: 27.04.2024 08:47:37
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

struct ThaoTac{
	int l,r,d,freg;
};

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int n,m,k;
    cin >> n >> m >> k;
    int a[n + 1],hieu_a[n + 1];
    FOR(i,1,n) cin >> a[i];
    hieu_a[1] = a[1];
    FOR(i,2,n){
    	hieu_a[i] = a[i] - a[i - 1];
    }
    ThaoTac tt[m + 1];
    FOR(i,1,m){
    	int l,r,d;
    	cin >> l >> r >> d;
    	tt[i] = {l,r,d,0};
    }
    /// xem no lap lai bao nhieu lan;
    int hieu[m + 1] = {0};
    FOR(i,1,k){
    	int x,y;
    	cin >> x >> y;
    	hieu[x]++;
    	hieu[y + 1]--; 
    }
    long long tong = 0;
    FOR(i,1,m){
    	tong += hieu[i];
    	tt[i].freg = tong;
    }
    /// Duyet lai truy van;
    FOR(i,1,m){
    	int l = tt[i].l,r = tt[i].r,d = tt[i].d,freg = tt[i].freg;
    	long long sum = 1ll * d * freg;
    	hieu_a[l] += sum;
    	hieu_a[r + 1] -= sum;
    }
    long long ans = 0;
    FOR(i,1,n){
    	ans += hieu_a[i];
    	cout << ans << " ";
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/