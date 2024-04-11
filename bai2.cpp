#include <bits/stdc++.h>

using namespace std;

string lat_xau(string s){
    int l = 0,r = s.size() - 1;
    while(l < r){
        swap(s[l],s[r]);
        ++l;
        --r;
    }
    return s;
}

string thuong(string s){
    string ans = ""; /// luu cac ki tu in thuong;
    for(int i =0 ; i< s.size();i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            ans += char(s[i] + 32);
        }
        else {
            ans += s[i];
        }
    }
    return ans;
}

string hoa(string s){
    string ans = ""; /// chua cac ki tu in hoa;
    for(int i =0;i < s.size();i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
            ans += char(s[i] - 32);
        }
        else{
            ans += s[i];
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    cout << lat_xau(s) << '\n';
    cout << thuong(s) << '\n';
    cout << hoa(s) << '\n';
    return (0 ^ 0);
}

