/**
 *    Author: Andrew
 *    Created: 22.05.2024 08:25:25
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
#define all(x) ((x).first,(x).second)
#define fi first
#define se second

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vii;
typedef vector<vector<int>> vvi;

const int N = 20;

int n,k;
int x[N + 2];
bool check = false; // Dung de check cau hinh cuoi

void init(){
    FOR(i,1,k){
        x[i] = i;
    }
}

void sinh(){
    int i = k;
    while(i >= 1 && x[i] == n - k + i){
        --i;
    }
    if(i == 0){
        check = true;
    }
    else{
        x[i]++;
        FOR(j,i + 1,k){
            x[j] = x[j - 1] + 1;
        }
    }
}

void solve(){
    cin >> n >> k;
    init();
    while(!check){
        FOR(i,1,k){
            cout << x[i];
        }
        cout << '\n';
        sinh();
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int tc;
    //cin >> tc;
    //return 0;
    tc = 1;
    while(tc--){
        solve();
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/