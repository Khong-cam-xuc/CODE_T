#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    if (s == "0"){
        cout << 0 << '\n';
        return 0;
    }
    sort(s.begin(),s.end());
    int cnt = 0;
    while(s[cnt] == '0'){
        ++cnt;
    }
    for(int i = cnt;i < s.size();i++){
        cout << s[i];
    }
    return (0 ^ 0);
}

