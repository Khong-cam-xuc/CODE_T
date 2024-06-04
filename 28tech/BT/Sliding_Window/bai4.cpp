/**
 *    Author: Andrew
 *    Created: 30.04.2024 11:45:03
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
int dd[256];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    file("/TASK");
    string s;
    cin >> s;
    int n = (int)s.size();
   	set<char> se(s.begin(),s.end());
   	int cnt = 0;/// dem so luong ki tu khac nhau
   	int l = 0,ans = INT_MAX;
   	REP(i,0,n){
   		dd[s[i]]++;
   		/// xuat hien dau tien
   		if (dd[s[i]] == 1){
   			++cnt;
   		}
   		while(cnt == (int)se.size()){
   			ans = min(ans,i - l + 1);
   			/// thu het cua so tu phia left
   			dd[s[l]]--;
   			// khong con trong cua so
   			if (dd[s[l]] == 0){
   				--cnt;
   			}
   			++l;
   		}
   	}
   	cout << ans << '\n';
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/