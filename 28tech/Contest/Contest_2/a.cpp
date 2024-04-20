/*Ở bài trước chắc bạn cũng đã search google được công thức tổng tự nhiên liên tiếp từ 1 tới N, bây giờ bạn hãy dùng kiến thức đó để giải quyết bài toán sau : Cho số nguyên không âm N, hãy tính các bội số của 28 mà nhỏ hơn hoặc bằng N.
Đầu vào

Số nguyên không âm N
Giới hạn

0<=N<=10^8
Đầu ra

In ra đáp án của bài toán
Ví dụ :
Input 01
60
Output 01
84
*/

/**
 *    Author: Phan Duc Phuc
 *    Created: 20.04.2024 08:05:38
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

int n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	cin >> n;
	long long sum = 0;
	for(int i = 28;i <= n;i+= 28){
		sum += i;
	}
	cout << sum;
    cerr << "Time: " << TIME << "s\n";
    return (0 ^ 0);
}