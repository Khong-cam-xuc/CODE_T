#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int chu_cai = 0,so = 0,dac_biet = 0;
    for(int i = 0;i < s.size();i++){
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) ++chu_cai;
        else if (s[i] >= '0' && s[i] <= '9') ++so;
        else ++dac_biet;
    }
    cout << chu_cai << " " << so << " " << dac_biet;
    return (0 ^ 0);
}
