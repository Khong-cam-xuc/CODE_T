#include <iostream>
#include <string>

using namespace std;

/*a: Chuyen sang he thap phan roi chia du cho 5 ---> cuoi cung neu no bang 0 tra ve yes.Nguoc lai tra ve NO;*/
/*Thuc hien chuyen sang he thap phan bang cach:
- Duyet tu cuoi ve dau roi xet: 2^0 --> 2^n - 1 cong don lai
- Trong vong for thuc hien dong thoi cong don voi buoc a
*/

long long bin_pow(long long a,long long b,long long mod){
    long long res = 1;
    if (b == 0) return 1;
    while(b > 0){
        if (b & 1){
            res = ((res % mod) * (a % mod)) % mod;
        }
        a = ((a % mod) * (a % mod)) % mod;
        b >>= 1;
    }
    return res;
}

int main(){
    string s;
    cin >> s;
    long long j = 0,ans = 0;
    for(int i = (int)s.size() - 1;i >= 0;i--){
        ans = ((ans % 5) + ((bin_pow(2,j,5)) * (s[i] - '0'))) % 5;
        ++j;
    }
    if (ans == 0) cout << "YES";
    else cout << "NO";
    return 0;
}
