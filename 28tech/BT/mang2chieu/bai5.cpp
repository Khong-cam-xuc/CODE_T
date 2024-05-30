/**
 *    Author: Andrew
 *    Created: 01.05.2024 10:05:28
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

const int N = 500;

int n,a[N + 2][N + 2];

void Pattern1(){
    FOR(i,1,n){
        FOR(j,1,n){
            cout << a[j][i] << " ";
        }
        cout << '\n';
    }
}

void Pattern2(){
    FOD(i,n,1){
        FOD(j,n,1){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
}

void Pattern3(){
    FOD(i,n,1){
        FOR(j,1,n){
            cout << a[j][i] << " ";
        }
        cout << '\n';
    }
}

void Pattern4(){
    FOR(i,1,n){
        FOD(j,n,1){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    cin >> n;
    FOR(i,1,n) FOR(j,1,n) cin >> a[i][j];
    cout << "Pattern 1:" << '\n';
    Pattern1();
    cout << "Pattern 2:" << '\n';
    Pattern2();
    cout << "Pattern 3:" << '\n';
    Pattern3();
    cout << "Pattern 4:" << '\n';
    Pattern4();
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/