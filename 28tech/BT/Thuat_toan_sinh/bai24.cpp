/**
 *    Author: Andrew
 *    Created: 27.05.2024 11:49:18
**/
#include <bits/stdc++.h>
//#pragma GCC target("popcnt,lzcnt,bmi,bmi2,abm")

using namespace std;

#ifdef Andrew
#include "debug.h"
#else
#define debug(x...) 44
#endif

#define TIME (1.0 * clock()/ CLOCKS_PER_SEC)
#define FOR(i,a,b) for(int i = (a);i <= (b);++i)
#define FOD(i,b,a) for(int i = (b);i >= (a);--i)
#define REP(i,a,b) for(int i = (a) ;i < (b);++i)
#define FILE(NAME) if (fopen(NAME".inp","r")){ freopen(NAME".inp","r",stdin);freopen(NAME".out","w",stdout);}
#define ALL(x) ((x).first,(x).second)
#define fi first
#define se second

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vii;
typedef vector<vector<int>> vvi;

const int N = 20;

char c;
int k;
string x;
bool check = false; // check cau hinh cuoi

// Khoi tao cau hinh dau tien
void init(){
   FOR(i,1,k){
    x += 'A';
   }
}

// Sinh chinh hop lap
void sinh(){
    int i = k - 1;
    while(i >= 0 && x[i] == c){
        --i;
    }
    if (i < 0) check = true;
    else{
        // Tang phan tu len 1 don vi
        x[i]++;
        // Chuyen cac phan tu sau ve 'A';
        FOR(j,i + 1,k - 1){
            x[j] = 'A';
        }
    }
}

void solve(){
    cin >> c;
    cin >> k;
    init();
    while(!check){
        FOR(i,0,k - 1){
            cout << x[i];
        }
        cout << '\n';
        sinh();
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    FILE("/TASK");
    int TC;
    //cin >> TC;
    TC = 1;
    while(TC--){
        solve();
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/