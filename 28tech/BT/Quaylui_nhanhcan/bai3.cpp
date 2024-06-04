/**
 *    Author: Andrew
 *    Created: 29.05.2024 04:06:44
**/
#include <bits/stdc++.h>

using namespace std;

const int N = 8;

int n;
int a[N + 2][N + 2];
bool check = false;

void Try(int i,int j,string s){
	if (i == n && j == n){
		cout << s << "\n";
		check = true;
		return;
	}
	if (i + 1 <= n && a[i + 1][j] == 1){
		s += "D";
		a[i + 1][j] = 0;
		Try(i + 1,j,s);
		a[i + 1][j] = 1;
		s.pop_back();
	}
	if (j + 1 <= n && a[i][j + 1] == 1){
		s += "R";
		a[i][j + 1] = 0;
		Try(i,j + 1,s);
		a[i][j + 1] = 1;
		s.pop_back();
	}
	if (i - 1 >= 1 && i - 1 <= n && a[i - 1][j] == 1){
		s += "U";
		a[i - 1][j] = 0;
		Try(i - 1,j,s);
		a[i - 1][j] = 1;
		s.pop_back();
	}
	if (j - 1 >= 1 && j - 1 <= n && a[i][j - 1] == 1){
		s += "L";
		a[i][j - 1] = 0;
		Try(i,j - 1,s);
		a[i][j - 1] = 1;
		s.pop_back();
	}
}

signed main(){
    if (fopen("/TASK.inp","r")){
        freopen("/TASK.inp","r",stdin);
        freopen("/TASK.out","w",stdout);
    }
    cin >> n;
    for(int i = 1; i <= n;i++){
    	for(int j = 1; j <= n;j++){
    		cin >> a[i][j];
    	}
    }
    // Khi quay le phan tu dau tien co the bi lap lai nen ta danh dau no la 0
    a[1][1] = 0;
    Try(1,1,"");
    if (!check) cout << -1;
    return 0;
}

/**"Genius is 1% talent and 99% percent hard work"**/