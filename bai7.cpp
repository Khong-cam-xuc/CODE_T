#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    string so = "";
    string chu_cai = "";
    for(int i = 0;i < s.size();i++){
        if (s[i] >= '0' && s[i] <= '9'){
            so += s[i];
        }
        else chu_cai += s[i];
    }
    cout << so << '\n';
    cout << chu_cai << '\n';
    return (0 ^ 0);
}

