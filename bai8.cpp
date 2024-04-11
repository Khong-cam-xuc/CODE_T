#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    string tmp = "28tech";
    string ans = "";
    for(int i = 0;i < s.size();i++){
        if (tmp.find(s[i]) == string::npos){
            ans += s[i];
        }
    }
    if (ans.empty()){
        cout << "EMPTY";
    }
    else cout << ans;
    return (0 ^ 0);
}

