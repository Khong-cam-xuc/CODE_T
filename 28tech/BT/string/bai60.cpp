#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> freq;
    map<array<int, 3>, int> count;
    count[{0, 0, 0}] = 1; /// 3 ki tu 't','2','8' co thu tu xuat hien bang nhau
    int res = 0;
    for (char c : s) {
        freq[c]++; /// Them tan xuat cua ki tu c
        ///Neu trong arr ma {0,0,0} thi so lan xuat hien cua no la bang nhau roi
        array<int, 3> arr = {freq['2'] - freq['8'], freq['2'] - freq['t'], freq['8'] - freq['t']};
        res += count[arr];
        count[arr]++;
    }
    cout << res;
    return 0;
}
