#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool chia_2(string s){ /// dau hieu chia het cho 2: co cac so tan cung 0,2,4,6,8
    int n = (int) s.size();
    if (s[n - 1] == '0' || s[n - 1] == '2' || s[n - 1] == '4' || s[n - 1] == '6' || s[n - 1] == '8'){
        return true;
    }
    return false;
}

bool chia_3(string s){ /// Tong cac so cua no chia het cho 3 thi no chia het cho 3
    int sum = 0;
    for(char x : s){
        sum += (x - '0');
    }
    if (sum % 3 == 0) return true;
    return false;
}

int main(){
    string s;
    cin >> s;
    if (chia_3(s) && chia_2(s)) cout << "YES";
    else cout << "NO";
    return 0;
}
