/**
 *    Author: Phan Duc Phuc
 *    Created: 23.04.2024 04:13:08
**/
#include <bits/stdc++.h>
//#pragma GCC target("popcnt,lzcnt,bmi,bmi2,abm")

using namespace std;

#define TIME (1.0 * clock()/ CLOCKS_PER_SEC)
#define FOR(i,a,b) for(int i = (a);i <= (b);++i)
#define FOD(i,b,a) for(int i = (b);i >= (a);--i)
#define REP(i,a,b) for(int i = (a) ;i < (b);++i)
#define file(NAME) if (fopen(NAME".inp","r")){ freopen(NAME".inp","r",stdin);freopen(NAME".out","w",stdout);}


int first_pos(int a[],int x,int n){
    int ans = -1;
    int l = 0,r = n - 1;
    while(l <= r){
        int mid = (l + r) >> 1;
        if (a[mid] == x){
            ans = mid;
            r = mid - 1;
        }
        else if (a[mid] < x){
            l = mid + 1;
        }
        else r = mid - 1;
    }
    return ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    int n,x;
    cin >> n >> x;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a + n);
    cout << first_pos(a,x,n) << '\n';
    cerr << "Time: " << TIME << "s\n";
    return (0 ^ 0);
}