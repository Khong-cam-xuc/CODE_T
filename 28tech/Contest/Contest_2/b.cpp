/**
 *    Author: Phan Duc Phuc - THPT NCT Ha Tinh
 *    Created: 2024-04-14-13.37
**/
#include <bits/stdc++.h>
//#pragma GCC target("popcnt,lzcnt,bmi,bmi2,abm")

using namespace std;

#define TIME (1.0 * clock()/ CLOCKS_PER_SEC)
#define FOR(i,a,b) for(int i = (a);i <= (b);++i)
#define FOD(i,b,a) for(int i = (b);i >= (a);--i)
#define REP(i,a,b) for(int i = (a) ;i < (b);++i)
#define NAME ""


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    if (fopen(NAME".inp","r")){
        freopen(NAME".inp","r",stdin);
        freopen(NAME".out","w",stdout);
    }
    string a;cin >> a;
    long long b;cin >> b;
    long long r = 0;
    for(int i = 0;i < (int)a.size();i++)
    {
        r = r * 10 + (a[i] - '0');
        r %= b;
    }
    cout << r;
    //cerr << "Time: " << TIME << "s\n";
    return (0 ^ 0);
}
