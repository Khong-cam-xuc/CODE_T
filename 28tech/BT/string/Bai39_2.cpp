#include <iostream>
#include <string>

using namespace std;

/// So chia het cho 11 la do chenh lech tong so o vi tri chan va tong so o vi tri le chia het cho 11

bool check(string s){
    s = '*' + s;
    int le = 0;
    int chan = 0;
    for(int i = 1; i < (int)s.size();i++){
        if (i & 1){
            le += (s[i] - '0');
        }
        else chan += (s[i] - '0');
    }
    if (abs(chan - le) % 11 == 0) return true;
    return false;
}

int main(){
    string s;
    cin >> s;
    cout << (check(s) ? "YES" : "NO");
    return 0;
}

