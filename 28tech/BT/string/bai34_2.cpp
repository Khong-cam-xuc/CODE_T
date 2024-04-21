#include <iostream>
#include <string>

using namespace std;

bool day_tang(string s){
    for(int i = 0;i < (int) s.size() - 1;i++){
        if (s[i] > s[i + 1]) return false;
    }
    return true;
}

bool day_giam(string s){
    for(int i = 0;i < (int)s.size() - 1;i++){
        if (s[i] < s[i + 1]) return false;
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    if (day_tang(s) || day_giam(s)){
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}
