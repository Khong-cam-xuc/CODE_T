/**
 *    Author: Andrew
 *    Created: 28.05.2024 09:10:10
**/
#include <bits/stdc++.h>
//#pragma GCC target("popcnt,lzcnt,bmi,bmi2,abm")

using namespace std;

#ifdef Andrew
#include "debug.h"
#else
#define debug(x...) 44
#endif

#define TIME (1.0 * clock()/ CLOCKS_PER_SEC)
#define FOR(i,a,b) for(int i = (a);i <= (b);++i)
#define FOD(i,b,a) for(int i = (b);i >= (a);--i)
#define REP(i,a,b) for(int i = (a) ;i < (b);++i)
#define FILE(NAME) if (fopen(NAME".inp","r")){ freopen(NAME".inp","r",stdin);freopen(NAME".out","w",stdout);}
#define ALL(x) ((x).first,(x).second)
#define fi first
#define se second

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vii;
typedef vector<vector<int>> vvi;

const int N = 20;

int n;
int x[N + 2];

// void back_track(int pos){
// 	// truong hop co so;
// 	if (<pos là vị trí cuối cùng>){
// 		<output/lưu lại tập hợp đã dựng nếu thỏa mãn>
// 		return;
// 	}
// 	/// Phần đệ quy
// 	for(<Tất cả các giá trị i có thể ở vị trí pos>){
// 		<thêm giá trị i vào tập đang xét>
// 		back_track(i + 1);
// 		<Xóa bỏ giá trị i khỏi tập đang xét>
// 	}
// }

// Sinh dãy nhị phân
// Bài toán:Liệt kê tất cả các dãy nhị phân có độ dài n,là dãy chứa tất cả n kí tự và gồm toàn các kí tự 0 và 1
// Phân tích: Sử dụng tư duy quy nạp "Xây tập sau từ tập trước"

void in(){
	FOR(i,1,n){
		cout << x[i] << " ";
	}
	cout << '\n';
}


void Try(int i){
	FOR(j,0,1){
		x[i] = j;
		// i o vi tri cuoi cung thi in ra
		if (i == n){
			in();
		}
		else{
			Try(i + 1);
		}
	}
}

void solve(){
	cin >> n;
	Try(1);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    FILE("/TASK");
    int TC;
    //cin >> TC;
    TC = 1;
    while(TC--){
    	solve();
    }
    return (0 ^ 0);
}

/**"Genius is 1% talent and 99% percent hard work"**/