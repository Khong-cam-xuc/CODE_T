/**
 *    Author: Andrew
 *    Created: 29.05.2024 06:53:10
**/
#include <bits/stdc++.h>

using namespace std;

const int N = 10;

int n,m;
int a[N + 2][N + 2];
int cnt = 0;

void Try(int i,int j){
	if (i == n && j == m){
        ++cnt;
        return;
    }
    if (i + 1 <= n){
        Try(i + 1,j);
    }
    if (j + 1 <= m){
        Try(i,j + 1);
    }
}

signed main(){
    if (fopen("/TASK.inp","r")){
        freopen("/TASK.inp","r",stdin);
        freopen("/TASK.out","w",stdout);
    }
    cin >> n >> m;
    for(int i = 1; i <= n;i++){
    	for(int j = 1; j <= n;j++){
    		cin >> a[i][j];
    	}
    }
    Try(1,1);
    cout << cnt;
    return 0;
}

/**"Genius is 1% talent and 99% percent hard work"**/