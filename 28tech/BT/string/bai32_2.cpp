#include <iostream>
#include <string>

using namespace std;

int is_prime(int n){
    for(int i = 2; i * i <= n;i++){
        if (n % i == 0) return false;
    }
    return n > 1;
}

int main(){
    string s;
    cin >> s;
    bool check = true;
    int sum = 0;
    for(int i = 0;i < (int)s.size();i++){
        sum += (s[i] - '0');
        if (!is_prime(s[i] - '0')){
            check = false;
            break;
        }
    }
    if (check && is_prime(sum)){
        cout << "YES";
    }
    else cout << "NO";

    return (0 ^ 0);
}
