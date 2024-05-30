/**
 *    Author: Andrew
 *    Created: 29.05.2024 05:29:17
**/
#include <bits/stdc++.h>

using namespace std;

const int N = 15;

int n,s;
int a[N + 2],x[N + 2];
bool check = false; // dung de check xem co cau hinh nao thoa man dieu kien sum == k hay khong
long long sum = 0;

void print(int i){
	cout << "[";
	for(int j = 1;j < i;j++){
		cout << x[j] << " ";
	}
	cout << x[i] << "]\n";
}

void Try(int i,int pos){
	for(int j = pos;j <= n;j++){
		x[i] = a[j];
		sum += a[j];
		if (sum == s){
			print(i);
		}
		else if (sum < s){
			Try(i + 1,j + 1);
		}
		// tra lai
		sum -= a[j];
	}
}

signed main(){
    if (fopen("/TASK.inp","r")){
        freopen("/TASK.inp","r",stdin);
        freopen("/TASK.out","w",stdout);
    }
    cin >> n >> s;
    for(int i = 1; i <= n;i++){
    	cin >> a[i];
    }
    sort(a + 1,a + n + 1);
    Try(1,1);
    //sort(ans.begin(),ans.end());
 	
    return 0;
}

/**"Genius is 1% talent and 99% percent hard work"**/