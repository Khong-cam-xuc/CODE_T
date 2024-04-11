#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = s.size() - 1;i >= 0;i--){
        ++cnt;
        if (cnt == 3 && i != 0){
            s.insert(i,",");
            cnt = 0;
        }
    }
    cout << s << '\n';
    return (0 ^ 0);
}

