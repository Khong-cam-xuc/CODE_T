/**
 *    Author: Andrew
 *    Created: 06.05.2024 09:14:37
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

typedef long long ll;


ll sum_cs(ll n){
	ll ans = 0;
	while(n > 0){
		ans += (n % 10);
		n /= 10;
	}
	return ans;
}

ll sum_tsnt(ll n){
	ll sum = 0;
	for(int i = 2;i *i <= n;i++){
		if (n % i == 0){
			while(n % i == 0){
				sum += sum_cs(i);
				n /= i;
			}
		}
	}
	if (n > 0){
		sum += sum_cs(n);
	}
	return sum;
}

bool is_prime(ll n)
{
    if (n == 2 || n == 3)
        return true;
    if (n < 3 || n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    ll n;
    cin >> n;
    ll sum_chuso = sum_cs(n);
    ll sum_thua_sont = sum_tsnt(n);
    if (is_prime(n) == 0 && sum_chuso == sum_thua_sont){
    	cout << "YES";
    }
    else cout << "NO";
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/