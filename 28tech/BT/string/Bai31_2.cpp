#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    long long sum = 0;
    for(char x : s){

        sum += (x - '0');
    }
    cout << sum;
    return (0 ^ 0);
}
