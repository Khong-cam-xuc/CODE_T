#include <iostream>
#include <string>

using namespace std;

bool chia_3(string s){
    int sum = 0;
    for(char x : s){
        sum += (x - '0');
    }
    if (sum % 3 == 0) return true;
    return false;
}

bool chia_5(string s){
    int n = (int) s.size();
    if (s[n - 1] == '0' || s[n - 1] == '5'){
        return true;
    }
    return false;
}

int main(){
    string s;
    cin >> s;
    if (chia_3(s) && chia_5(s)){
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}
