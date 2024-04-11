#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    if (s.size() & 1){
        cout << s[s.size() / 2];
    }
    else cout << "NOT FOUND";
    return (0 ^ 0);
}
