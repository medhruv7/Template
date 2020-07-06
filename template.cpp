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
const int inf = 1e18 + 5;
 
template<typename T>
T binpow(T a,T b,T modi){
	T res = 1;
	while(b){
		if(b&1){
			res = (res*a)%modi;
		}
		b /= 2;
		(a *= a) %= modi;
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
template<typename T>
T inv(T a){
	return binpow(a,mod - 2,mod);
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

random_device rd;
mt19937 g(rd());

int dx[] = {0,-1,0,1};
int dy[] = {1,0,-1,0};

const int N = 100;

vi fact;

void factorial(){
	fact.resize(N);
	fact[0] = 1,fact[1] = 1;
	fro(i,2,N){
		fact[i] = (fact[i - 1]*i)%mod;
	}
}

int nCr(int n,int r){
	return (mul(fact[n],inv(mul(fact[r],fact[n - r]))));
}

int nPr(int n,int r){
	return(mul(nCr(n,r),fact[r]));
}

// Linear Seive


int lp[N + 1];
vector<int> pr;
void ls(){
	for(int i = 2;i <= N; ++i){
		// means prime
		if(lp[i] == 0){
			lp[i] = i;
			pr.push_back(i);
		}
		for(int j = 0;j < pr.size() && pr[j] <= lp[i] && i*pr[j] <= N; j++){
			lp[i*pr[j]] = pr[j];
		}
	}
}


// getting the prime factorisation

vector<int> getfc(int n){
	vi factors;
	while(n != 1){
		int x = lp[n];
		factors.push_back(x);
		while(n%x == 0){
			n /= x;
		}
	}
	return factors;
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	// shuffle(all(a),g);
	
	return 0;
}
