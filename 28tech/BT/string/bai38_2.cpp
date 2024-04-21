#include <iostream>
#include <string>

using namespace std;

bool check(string s){
    int n = (int) s.size();
    if (n == 1 && s[0] == '0') return true;
    if (n < 2) return false;
    string tmp = s.substr(n - 2);
    if(tmp == "00" || tmp == "25" || tmp == "50" || tmp == "75"){
        return true;
    }
    return false;
}

int main(){
    string s;
    cin >> s;
    if (check(s)){
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}
