/**
 *    Author: Andrew
 *    Created: 27.04.2024 09:51:22
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


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int n,m;
    cin >> n >> m;
    long long a[n],b[m];
    for(long long &x : a)cin >> x;
    for(long long &x : b) cin >> x;
    long long l1 = 0,l2 = 0;
	long long cnt = 0;
	while(l1 < n || l2 < m){
		if (a[l1] == b[l2]){
			long long tmp1 = l1,tmp2 = l2,cnt_1 = 0,cnt_2 = 0;
			/// dem xem co bao nhieu so giong nhau
			while(tmp1 < n && a[tmp1] == b[tmp2]){
				++cnt_1;
				++tmp1;
			}
			--tmp1;
			while (tmp2 < m && a[tmp1] == b[tmp2]){
				++cnt_2;
				++tmp2;
			}
			l1 = tmp1 + 1;l2 = tmp2;
			cnt += 1ll * cnt_1 * cnt_2;
		}
		else if (a[l1] < b[l2]){
			++l1;
		}
		else ++l2;
	}
	cout << cnt;
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/