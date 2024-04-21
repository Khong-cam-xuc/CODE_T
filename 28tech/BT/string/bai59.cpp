/**
 *    Author: Phan Duc Phuc
 *    Created: 18.04.2024 04:47:35
**/
#include <bits/stdc++.h>
//#pragma GCC target("popcnt,lzcnt,bmi,bmi2,abm")

using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_OJUNGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


#define TIME (1.0 * clock()/ CLOCKS_PER_SEC)
#define FOR(i,a,b) for(int i = (a);i <= (b);++i)
#define FOD(i,b,a) for(int i = (b);i >= (a);--i)
#define REP(i,a,b) for(int i = (a) ;i < (b);++i)
#define file(NAME) if (fopen(NAME".inp","r")){ freopen(NAME".inp","r",stdin);freopen(NAME".out","w",stdout);}


int main(){
	/// Viet solution cho bai nay
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    s = "_" + s;
    unordered_map<int,int> us; /// dung de luu cac chi so tam thoi;
    long long max_len = 0; 
    int cnt = 0;/// chenh lech
    us[0] = 0; /// TH dac biet
    for(int i = 1;i < (int)s.size();i++){
    	if (s[i] == '0'){
    		--cnt;
    	}
    	else ++cnt;
    	if (us.find(cnt) != us.end()){
    		long long len = i - us[cnt];
    		max_len = max(max_len,len);
    	}
    	else{
    		us[cnt] = i;
    	}
    }
    cout << max_len << '\n';
    //cerr << "Time: " << TIME << "s\n";
    return (0 ^ 0);
}