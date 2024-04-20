/*Cho 2 số N và M, hãy tìm số dư khi chia N cho M. Để tính số dư của 2 số N và M, trong trường hợp N là 1 số nguyên lớn, ta có thể dùng kiến thức toán học sau.

Bạn có N = 12345 và M = 3, bạn có thể duyệt từng chữ số của N từ trái qua phải và duy trì số dư r = 0 ban đầu, khi gặp số 1, r = r * 10 + 1, sau đó lấy r % 3 = 1, khi gặp 2, r = r * 10 + 2 = 12, r % 3 = 0,... tương tự như vậy cho tới khi gặp số cuối cùng của N, giá trị của r khi đó chính là số dư khi chia N cho M.
-Đầu vào

+Dòng đầu tiên là số nguyên dương N.

+Dòng thứ 2 là số nguyên dương M.
-Giới hạn

+N có không quá 1000 chữ số

+M là 1 số nguyên 64 bit.
-Đầu ra

In ra kết quả của bài toán
Ví dụ :
Input 01
33067946071531150754233004290758406156224088702123385775727721812560692728127018053118203890080097807349737445483656674337750559490463284882515284188690875033135649896188928054291493979903124818899453052034828440852665076293856223903153549522293752626469246456263469220701548339620150079748958035285278459874425510146423114651458922315382153363867418189427062506833837102630904319972984364408143264207263924148697330179177840468429040754651164286732641405984220989893094158917765142342992431463840820570772383338073889397592800118784783700396465644597065301244994051135101466785516990398581
9999999999998156
Output 01

7481318352255865

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

