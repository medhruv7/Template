//dhruv
#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define ll long long
#define ffor(i,n) for(int i = 0;i < (n); ++i)
#define fro(i,j,n) for(int i = (j);i < (n); ++i)
#define all(v) v.begin(),v.end()
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vpii vector<pii>
#define ff first
#define ss second
const int mod = 1e9 + 7;
 
template<typename T>
T binpow(T a,T b,T mod){
	T res = 1;
	while(b){
		if(b&1){
			res = (res*a)%mod;
		}
		b /= 2;
		(a *= a) %= mod;
	}
	return res;
}
 
 
template<typename T>
T binpow(T a,T b){
	T res = 1;
	while(b){
		if(b&1){
			res = (res*a);
		}
		b /= 2;
		a *= a;
	}
	return res;
}
 
template<typename T>
T add(T a,T b){
	return (a + b)%mod;
}
template<typename T>
T sub(T a,T b){
	return add(a,mod - b);
}
template<typename T>
T mul(T a,T b){
	return (a*b)%mod;
}

int make_int(string s){
	int x = 0;
	reverse(s.begin(),s.end());
	string tmp = s;
	for(int i = 0;i < s.length(); ++i){
		x *= 10;
		x += (int)(tmp.back() - '0');
		tmp.pop_back();
	}
	return x;
}
 
string make_string(int s){
	string x;
	while(s){
		x.push_back(char(s%10 + '0'));
		s /= 10;
	}
	reverse(x.begin(),x.end());
	return x;
}


const int inf = 1e18 + 5;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	return 0;
}
