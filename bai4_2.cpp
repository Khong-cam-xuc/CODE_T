#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int dd[256];

int main(){
    string s;
    cin >> s;
    for(char x : s){
        ++dd[x];
    }
    int ans_mx = 0,ans_mn = 1e9 + 5;
    char kt_mx,kt_mn;
    for(int i =0;i < 256;i++){
        if (dd[i] > 0){
            if (ans_mx <= dd[i]){
                kt_mx = char(i);
                ans_mx = dd[i];
            }
            if (ans_mn >= dd[i]){
                kt_mn = char(i);
                ans_mn = dd[i];
            }
        }
    }
    cout << endl;
    cout << kt_mx << " " << ans_mx << '\n';
    cout << kt_mn << " " << ans_mn << '\n';
    return (0 ^ 0);
}
