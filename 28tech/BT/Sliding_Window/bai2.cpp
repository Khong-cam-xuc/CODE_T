/**
 *    Author: Andrew
 *    Created: 29.04.2024 10:43:26
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

const int N = 1e6;

long long n,k;
long long a[N + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    cin >> n >> k;
    REP(i,0,n) cin >> a[i];
    deque<long long> min_deque,max_deque;
    REP(i,0,n){
        //debug(max_deque);
        // loai bo so thua trong cua so k phan tu
        while(!min_deque.empty() && min_deque.front() <= i - k) min_deque.pop_front();
        while(!max_deque.empty() && max_deque.front() <= i - k) max_deque.pop_front();
        // Loai bo cac chi so phan tu nho hon khoi min_deque;
        // va loai bo cac chi so phan tu lon hon khoi max_deque;
        while(!min_deque.empty() && a[min_deque.back()] > a[i]) min_deque.pop_back();
        while(!max_deque.empty() && a[max_deque.back()] < a[i]) max_deque.pop_back();
        ///Them chi so phan tu hien tai vao min_deque and max_deque;
        min_deque.push_back(i);
        max_deque.push_back(i);
        /// cua so luon du k cs
        if (i >= k - 1) cout << a[min_deque.front()] << " " << a[max_deque.front()] << '\n'; 
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/
