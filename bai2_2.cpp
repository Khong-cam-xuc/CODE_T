#include <iostream>
#include <string>

using namespace std;

void hoa(string &s){
    for(char &x : s){
        x = toupper(x);
    }
}

void thuong(string &s){
    for(char &x : s){
        x = tolower(x);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    getline(cin,s);
    hoa(s);
    cout << s << '\n';
    thuong(s);
    cout << s;
    return (0 ^ 0);
}
