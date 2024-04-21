#include <iostream>
#include <string>

using namespace std;

bool thuan_nghich(string s){
    int l = 0,r = (int) s.size() - 1;
    while(l < r){
        if (s[l] != s[r]) return false;
        ++l;--r;
    }
    return true;
}

bool find_6_in_array(string s){
    if (s.find('6') != string::npos){
        return true;
    }
    return false;
}

int main(){
    string s;
    cin >> s;
    if (thuan_nghich(s) && find_6_in_array(s)){
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}
