/**
 *    Author: Phan Duc Phuc - THPT NCT Ha Tinh
 *    Created: 17.04.2024 04:12:06
**/
#include <bits/stdc++.h>
//#pragma GCC target("popcnt,lzcnt,bmi,bmi2,abm")

using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_OJUNGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


#define TIME (1.0 * clock()/ CLOCKS_PER_SEC)
#define FOR(i,a,b) for(int i = (a);i <= (b);++i)
#define FOD(i,b,a) for(int i = (b);i >= (a);--i)
#define REP(i,a,b) for(int i = (a) ;i < (b);++i)
#define file(NAME) if (fopen(NAME".inp","r")){ freopen(NAME".inp","r",stdin);freopen(NAME".out","w",stdout);}

typedef pair<string,int> psi;

bool cmp(psi &X,psi &Y){
	if (X.second != Y.second){
		return (X.second > Y.second);
	}
	else{
		return (X.first < Y.first);
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string tt;
    map<string,int> mp;
    while(getline(cin,tt)){
    	stringstream ss(tt);
    	string word;
    	vector<string>v;
    	while(getline(ss,word,'-')){
    		if (word[0] == ' '){
    			word.erase(0,1);
    		}
    		else if (word[word.size() - 1] == ' '){
    			word.pop_back();
    		}
    		v.push_back(word);
    	}
    	int n = (int) v[0].size();
    	///Lay xau cuoi cua v[0] do chinh la ti so;
    	string ti_so = "";
    	for(int i = n - 1;i >= 0;--i){
    		if (v[0][i] >= '0' && v[0][i] <= '9'){
    			ti_so = v[0][i] + ti_so;
    		}
    		else{
    			break;
    		}
    	}
    	/// Ten doi bong la cat tu dau den truoc dau cach
    	string name_doi = v[0].substr(0, n - ti_so.size() - 1);
    	mp[name_doi] += stoll(ti_so);
    	ti_so = "";
    	// cout << name_doi << " " << ti_so << '\n';
    	/// v[1] thi xau dau tien chinh la ti so;
    	for(int i = 0;i < n;i++){
    		if (v[1][i] >= '0' && v[1][i] <= '9'){
    			ti_so += v[1][i];
    		}
    		else{
    			break;
    		}
    	}
    	/// Ten doi bong cat tu dau cach den het
    	name_doi = v[1].substr(0 + ti_so.size() + 1); /// tinh ca dau cach
    	mp[name_doi] += stoll(ti_so);
    }
   	///chuyen doi tu map sang vector<pair<string,int>>;
   	vector<pair<string,int>> vs;
   	for(auto x : mp){
   		vs.push_back({x.first,x.second});
   	}
   	sort(vs.begin(),vs.end(),cmp);
   	for(auto x : vs){
   		cout << x.first << " " << x.second << '\n';
   	}
    //cerr << "Time: " << TIME << "s\n";
    return (0 ^ 0);
}

