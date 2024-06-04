/**
*    Author: Andrew
*    Created: 30.05.2024 15:13:18
**/

#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i = (a);i <= (b);++i)
#define FOD(i,b,a) for(int i = (b);i >= (a);--i)
#define REP(i,a,b) for(int i = (a) ;i < (b);++i)
#define ALL(x) ((x).first,(x).second)
#define fi first
#define se second

typedef long long ll;

typedef pair<int,int> pii;
typedef vector<pair<int,int>> vii;
typedef vector<vector<int>> vvi;

const int N = 12;
const int MAX = 144;

int n,m,cnt = 0;
int a[N + 2][N + 2];
int hang[MAX + 2],cot[MAX + 2],cheo_trai[MAX + 2],cheo_phai[MAX + 2];

// void Try(int pos){
//     FOR([{Mỗi phương án chọn pos (Thuộc tập D)}]){
//         // Trường hợp cơ sở
//         if ([Chấp nhận pos]){
//             x[pos] = j;
//             if ([pos tới vị trí cuối cùng]){
//                 in ra cấu hình;
//                 return;
//             }
//             //Phần đệ quy
//             for(<tất cả các giá trị có thể ở vị trí pos>){
//                 <thêm phần tử i vào tập đang xét>
//                 Try(pos + 1);
//                 <Xóa bỏ giá trị tập đang xét>
//             }
//         }
//     }
// }


void Try(int i){
    // Thu dat quan hau vao cac cot tu 1 cho toi n
    FOR(j,1,n){
        // Xac dinh duong cheo chinh va duong cheo phu hien tai
        int curr_left = n - (i + j);
        int curr_right = (i - j) + n;
        // Check no co thoa man dieu kien hay khong
        if (cot[j] == 1) continue;
        if (cheo_trai[(i + j) - n] == 1) continue;
        if (cheo_phai[(i - j) + n] == 1) continue;
        // Ta danh dau no lai neu da hop le
        
    }
}

signed main(){
    int n;
    cin >> n;
    if (fopen("/TASK.inp","r")){
        freopen("/TASK.inp","r",stdin);
        freopen("/TASK.out","w",stdout);
    }
    cin >> n >> m;
    FOR(i,1,n){
        FOR(j,1,m){
            cin >> a[i][j];
        }
    }
    Try(1);
    return 0;
}