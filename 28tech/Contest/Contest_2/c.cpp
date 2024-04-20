/*Một đám đông được xếp thành N hàng, mỗi hàng có 1 số người nhất định. Nhiệm vụ của bạn là hãy tìm tên người đứng ở số thứ tự y trong hàng x.

Ví dụ người đứng ở hàng 3 số thứ tự 5 có tên là X

-Đầu vào

Dòng 1 là N và Q tương ứng với số hàng của đám đông và số truy vấn

N dòng tiếp theo mỗi dòng mô tả 1 hàng người, trong đó số đầu tiên của 1 dòng là số người có trong hàng đó gọi là M, M từ tiếp theo là tên của M người trong hàng, tên người chỉ bao gồm 1 từ.

Q dòng tiếp theo mỗi dòng là 2 số x, y tương ứng với truy vấn
-Giới hạn

1<=N,M<=10^5

1<=Q<=1000

1<=x<=N

y đảm bảo là số thứ tự phù hợp với từng hàng
-Đầu ra

In ra tên người của mỗi truy vấn trên từng dòng
-Ví dụ :
Input 01
8 9
5 Biden Hanh Elon Ngoc Duc 
12 Hanh Biden Thuy Thuy Duc Tim Biden Thuy Tim Lan Elon Nhung 
10 Ngoc Phuong Duc Ngoc Hanh Duc Phuong Tim Lan Lan 
10 Nhung Lan Ngoc Ngoc Biden Phuong Nhung Elon Phuong Duc 
7 Lan Elon Lan Tim Biden Ngoc Elon 
7 Phuong Hanh Lan Tim Hanh Elon Duc 
10 Hanh Hanh Biden Duc Nhung Duc Tim Elon Lan Thuy 
14 Biden Hanh Lan Duc Phuong Thuy Thuy Thuy Thuy Nhung Biden Lan Phuong Hanh 
4 10
4 9
2 5
7 7
1 4
4 3
1 1
4 7
4 3

Output 01
Duc
Phuong
Duc
Tim
Ngoc
Ngoc
Biden
Nhung
Ngoc
*/
/**
 *    Author: Phan Duc Phuc
 *    Created: 20.04.2024 08:11:15
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

int n,q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	cin >> n >> q;
	vector<vector<string>> v(n + 1);
	for(int i = 1;i <= n;i++){
		int tt;cin >> tt;
		v[i].resize(tt + 1);
		for(int j = 1;j <= tt;j++){
			cin >> v[i][j];
		}
	}
	while(q--){
		int x,y;
		cin >> x >> y;
		cout << v[x][y] << '\n';
	}
    //cerr << "Time: " << TIME << "s\n";
    return (0 ^ 0);
}

