/**
 *    Author: Andrew
 *    Created: 18.05.2024 08:58:10
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

const int N = 100;

int n,m,ans = 0;
int a[N + 2][N + 2];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int dem(int x,int y){
    int cnt = 0;
    /// xet cac canh xung quanh
    REP(k,0,4){
        int x_moi = x + dx[k];
        int y_moi = y + dy[k];
        if (x_moi >= 1 && x_moi <= n && y_moi >= 1 && y_moi <= m && a[x_moi][y_moi]){
            ++cnt;
        }
    }
    return cnt;
}

/// Loang
void loang(int x,int y){
    a[x][y] = 2;
    REP(k,0,4){
        int x_moi = x + dx[k];
        int y_moi = y + dy[k];
        if (x_moi >= 1 && x_moi <= n && y_moi >= 1 && y_moi <= m && a[x_moi][y_moi] == 1){
            loang(x_moi,y_moi);
        }
    }
    // duyet lai tu cho da loang xong
    //cout << x << " " << y << "\n";
    // Dem so canh ben ngoai dong gop
    ans += 4 - dem(x,y);
}

void solve(){
    cin >> n >> m;
    FOR(i,1,n){
        FOR(j,1,m){
            cin >> a[i][j];
        }
    }
    FOR(i,1,n){
        FOR(j,1,m){
            if (a[i][j] == 1){
                loang(i,j);
                cout << ans << " ";
                ans = 0;
            }
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int tc;
    //cin >> tc;
    tc = 1;
    while(tc--){
        solve();
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/