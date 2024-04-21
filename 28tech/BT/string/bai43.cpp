#include <iostream>
#include <string>

using namespace std;

long long gcd(long long a,long long b){
    if (b == 0){
        return a;
    }
    return gcd(b,a % b);
}

long long string_lar(string n,long long m){ /// Thuc hien theo thuat toan Euclid
    long long ans = 0;
    for(int i = 0;i < (int)n.size();i++){
        ans = (ans * 10 + (n[i] - '0')) % m;
    }
    if (ans == 0) return m; /// truong hop ma da chia du
    return gcd(ans,m);
}

int main(){
    string n;
    long long m;
    cin >> n >> m;
    cout << string_lar(n,m);
    return 0;
}