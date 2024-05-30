/**
 *    Author: Andrew
 *    Created: 03.05.2024 08:22:14
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


/// Thao tac can bang
void Balance(){
	if (size_small > size_big + 1){
		big.push(small.top()); ++size_big;
		small.pop();--size_small;
	}
	else if (size_small < size_big){
		small.push(big.top());++size_small;
		big.pop(); --size_big;
	}
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/