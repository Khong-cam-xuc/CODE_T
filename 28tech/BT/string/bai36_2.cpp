#include <iostream>
#include <string>

using namespace std;

bool xet_2_so_cuoi(string s){ /// 2 so cuoi chia het cho 4 thi so ca so do chia het cho 4;
    int n = (int) s.size();
    string tmp = s.substr(n - 2);
    int ans = 0;
    for(char x : tmp){
        ans = ans * 10 + (x - '0');
    }
    if (ans % 4 == 0) return true;
    return false;

}

int main(){
    string s;
    cin >> s;
    if (s.size() == 1 && (s[0] - '0') % 4 == 0){
        cout << "YES";
    }
    else if (s.size() == 1) cout << "NO";
    else{
        if (xet_2_so_cuoi(s)){
            cout << "YES";
        }
        else cout << "NO";
    }
    return 0;
}
