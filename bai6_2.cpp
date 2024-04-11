/// Doc lai
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;


int dd1[256],dd2[256];

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    for(char x : s1){
        dd1[x] = 1;
    }
    for(char x : s2){
        dd2[x] = 1;
    }
    vector<int> v,v2;
    for(int i =0;i < 256;i++){
        if (dd1[i] == 1 && dd2[i] == 0){ /// nam trong s1 va khong nam trong s2;
            v.push_back(i);
        }
        else if (dd1[i] == 0 && dd2[i] == 1){ /// nam trong s2 va khong nam trong s1;
            v2.push_back(i);
        }
    }
    for(auto x : v) cout << char(x);
    for(auto x : v2) cout << char(x);
    return (0 ^ 0);
}
