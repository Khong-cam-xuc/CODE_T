#include <iostream>
#include <string>

using namespace std;

/// Nhan xet: Khi n chia het cho 2 ^ k thi phu thuoc vao k bit cuoi cung,con nhung bit thu k + 1 tro ve thi la boi cua 2 ^ k roi;

long long bin_pow(long long a,long long b){
    long long ans = 1;
    if (b == 0) return 1;
    while (b > 0){
        if (b & 1){
            ans = ans * a;
        }
        a *= a;
        b >>= 1;
    }
    return ans;
}

int main(){
    string s;
    cin >> s;
    int k;cin >> k;
    long long ans = 0;
    int j = 0;
    for(int i = (int)s.size() - 1;i >= 0;i--){
        ans = ans + (bin_pow(2,j) * (s[i] - '0'));
        if (j == k - 1){
            break;
        }
        ++j;
    }
    if (ans % bin_pow(2,k) == 0) cout << "YES";
    else cout << "NO";
    return 0;
}
