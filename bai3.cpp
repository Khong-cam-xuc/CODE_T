#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 0;i < s.size();i++){
        if (s[i] >= '0' && s[i] <= '9'){
            sum += (int)(s[i] - '0');
        }
    }
    cout << sum;
    return (0 ^ 0);
}

