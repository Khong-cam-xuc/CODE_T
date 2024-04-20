/*28Tech rất thích BTC và bây giờ anh ta nhờ bạn giúp 1 bài toán, nếu làm đúng bạn sẽ nhận được 1 BTC tương đương khoảng 64K đô la tại tháng 4/2024. Bài toán như sau : Cho xâu S có độ dài N chỉ bao gồm 3 chữ cái là B, T, C trong đó có ít nhất b chữ *B, *ít nhất t chữ T, ít nhất c chữ C, bạn hãy xác định có thể tồn tại bao nhiêu xâu S.

Gợi ý : Dùng vòng for lồng nhau để xét được mọi cặp thỏa mãn phương trình x + y + z = N với x >= b, y >= t và z >= c.

Bài này các bạn sử dụng kiến thức về Multinomial Coefficient. Ví dụ bài toán là cho từ mississippi, hỏi có bao nhiêu từ khác nhau có thể tạo thành bằng cách sắp đặt lại các kí tự trong từ này. Nó tương tự như đếm số cách chia n phần tử thành các tập có k1, k2, k3…km phần tử.

Ví dụ N = 4, b = 1, t = 1, c = 1 thì có tất cả 36 xâu thỏa mãn đó chính là b = 2, t = 1, c = 1 có 4! / (2! * 1! * 1!) = 12 cách b = 1, t = 2, c = 1 có 4! / (2! * 1! * 1!) = 12 cách b = 1, t = 1, c = 2 có 4! / (2! * 1! * 1!) = 12 cách
Đầu vào

Dòng 1 là T : số test case

T dòng tiếp theo mỗi dòng là 1 test gồm 4 số N, b, t, c
Giới hạn

1<=T<=1000

1<=N<=100

1<=b,t,c<=N
Đầu ra

In ra kết quả của mỗi test trên từng dòng
Ví dụ :
Input 01

5
15 4 2 1
15 6 5 3
17 3 1 7
17 1 1 11
16 6 1 6

Output 01

11043461
1411410
37925606
990624
5102240

*/
/**
 *    Author: Phan Duc Phuc
 *    Created: 20.04.2024 10:43:35
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

long long gt(int n){
    long long ans = 1;
    for(long long i = 1; i <= n;i++){
        ans *= i;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--){
        int n,b,t,c;
        cin >> n >> b >> t >> c;
        long long res = 0;
        for(int x = b;x <= n;x++){ /// x
            for(int y = t;y <= n - x;y++){ /// y
                int z = n - x - y; // z
                if (z >= c){
                    res += gt(n) / (gt(x) * gt(y) * gt(z));
                }
            }
        }
        cout << res << '\n';
    }
    cerr << "Time: " << TIME << "s\n";
    return (0 ^ 0);
}

