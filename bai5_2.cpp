#include <iostream>
#include <string>
#include <set>
#include <map>

using namespace std;

int dd[256];

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    for(char x : s1){
        dd[x] = 1;
    }
    for(char x : s2){
        if (dd[x] > 0){
            dd[x] = 2;
        }
    }
    for(int i = 0;i < 256;i++){
        if (dd[i] == 2){
            cout << char(i);
        }
    }
    cout << '\n';
    for(char x : s2){
        dd[x] = 1;
    }
    for(int i = 0;i < 256;i++){
        if (dd[i] > 0){
            cout << char(i);
        }
    }
    return (0 ^ 0);
}
