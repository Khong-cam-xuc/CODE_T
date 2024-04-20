/*Cho 2 số N và M, hãy tìm số dư khi chia N cho M. Để tính số dư của 2 số N và M, trong trường hợp N là 1 số nguyên lớn, ta có thể dùng kiến thức toán học sau.

Bạn có N = 12345 và M = 3, bạn có thể duyệt từng chữ số của N từ trái qua phải và duy trì số dư r = 0 ban đầu, khi gặp số 1, r = r * 10 + 1, sau đó lấy r % 3 = 1, khi gặp 2, r = r * 10 + 2 = 12, r % 3 = 0,... tương tự như vậy cho tới khi gặp số cuối cùng của N, giá trị của r khi đó chính là số dư khi chia N cho M.
Đầu vào

Dòng đầu tiên là số nguyên dương N.

Dòng thứ 2 là số nguyên dương M.
Giới hạn

N có không quá 1000 chữ số

M là 1 số nguyên 64 bit.
Đầu ra

In ra kết quả của bài toán
Ví dụ :
Input 01


33067946071531150754233004290758406156224088702123385775727721812560692728127018053118203890080097807349737445483656674337750559490463284882515284188690875033135649896188928054291493979903124818899453052034828440852665076293856223903153549522293752626469246456263469220701548339620150079748958035285278459874425510146423114651458922315382153363867418189427062506833837102630904319972984364408143264207263924148697330179177840468429040754651164286732641405984220989893094158917765142342992431463840820570772383338073889397592800118784783700396465644597065301244994051135101466785516990398581
9999999999998156

Output 01

7481318352255865

*/
/**
 *    Author: Phan Duc Phuc - THPT NCT Ha Tinh
 *    Created: 2024-04-14-13.37
**/
#include <bits/stdc++.h>
//#pragma GCC target("popcnt,lzcnt,bmi,bmi2,abm")

using namespace std;

#define TIME (1.0 * clock()/ CLOCKS_PER_SEC)
#define FOR(i,a,b) for(int i = (a);i <= (b);++i)
#define FOD(i,b,a) for(int i = (b);i >= (a);--i)
#define REP(i,a,b) for(int i = (a) ;i < (b);++i)
#define NAME ""


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    if (fopen(NAME".inp","r")){
        freopen(NAME".inp","r",stdin);
        freopen(NAME".out","w",stdout);
    }
    string a;cin >> a;
    long long b;cin >> b;
    long long r = 0;
    for(int i = 0;i < (int)a.size();i++)
    {
        r = r * 10 + (a[i] - '0');
        r %= b;
    }
    cout << r;
    //cerr << "Time: " << TIME << "s\n";
    return (0 ^ 0);
}
