/**
 *    Author: Phan Duc Phuc
 *    Created: 23.04.2024 09:31:27
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

int n,x;


bool cmp(int &a,int &b){
	if (abs(a - x) != abs(b - x)){
		return (abs(a - x) < abs(b - x));
	}
	return a < b;
}

bool cmp2(int a,int b){
	if (a % 2 == 0 && b % 2 == 0){
		return a < b;
	}
	else if (a % 2 != 0 && b % 2 != 0){
		return a > b;
	}
	else{
		if (a % 2 == 0 && b % 2 != 0){
			return true;
		}
		return false;
	}
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    cin >> n >> x;
    int a[n];
    for(int &t : a) cin >> t;
   	///Yeu cau 1;
    sort(a,a + n,cmp);
	for(int t : a) cout << t << " ";
	cout << '\n';
	//yeu cau 2;
	sort(a,a + n,cmp2);
	for(int t : a) cout << t << " ";
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/