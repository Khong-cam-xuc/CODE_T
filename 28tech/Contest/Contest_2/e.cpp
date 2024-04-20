/**
 *    Author: Phan Duc Phuc
 *    Created: 20.04.2024 09:02:12
**/
#include <bits/stdc++.h>
#pragma GCC target("popcnt,lzcnt,bmi,bmi2,abm")

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

long long so_du(string s,int x){
	long long du = 0;
	for(char item : s){
		du = du * 10 + (item - '0');
		du %= x;
	}
	return du;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
    	string s;
    	cin >> s;
    	long long cnt_8 = 0,cnt_24 = 0;
    	for(int i = 0;i < (int)s.size();i++){
    		string tmp = "";
    		int du_1 = 0,du_2 = 0;
    		for(int j = i;j < (int)s.size();j++){
    			tmp.push_back(s[j]);
    			du_1 = du_1 * 10 + (tmp[tmp.size() - 1] - '0');
    			du_2 = du_2 * 10 + (tmp[tmp.size() - 1] - '0');
                du_2 = du_2 % 24;
                du_1 =du_1 % 8;
    			du_1 %= 24;
    			if (du_2 == 0){
    				++cnt_8;
    				++cnt_24;
    			}
    			else if (du_1 == 0){
    				++cnt_8;
    			}
    		}
    	}
    	cout << (cnt_8 - cnt_24) << '\n';
    }
    cerr << "Time: " << TIME << "s\n";
    return (0 ^ 0);
}