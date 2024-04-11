#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    string s;
    cin >> s;
    map<char,int> mp;
    for(char x : s){
        ++mp[x];
    }
    for(auto x : mp){
        cout << x.first << " " << x.second << '\n';
    }
    cout << '\n';
    for(char x : s){
        if (mp[x] > 0){
            cout << x << " " << mp[x] << '\n';
            mp[x] = 0;
        }
    }
    return (0 ^ 0);
}
