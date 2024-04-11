#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    bool check = true;
    for(int i =0;i < s.size() - 1;i++){
        int tmp1 = (s[i] - '0');
        int tmp2 = (s[i + 1] - '0');
        if (abs(tmp1 - tmp2) != 1){
            check = false;
            break;
        }
    }
    if (!check){
        cout << "NO\n";
    }
    else cout << "YES\n";
    return (0 ^ 0);
}

