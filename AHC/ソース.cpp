#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define elif else if
using P = pair<int, int>;
typedef int long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
const int mod = 1000000007;
const int mod2 = 998244353;



int main() {
	const int N = 30;
	vector<vi> t(N, vi(N));
	rep(i, N) {
		string s;
		cin >> s;
		rep(j, N) {
			t[i][j] = s[j]-'0';
		}
	}

	vector<vi> ans(N, vi(N));

	vi dx = { -1,0,1,0 };
	vi dy = { 0,-1,0,1 };

	vector<vector<int>> to(8, vector<int>(4));

	to = {
		{1, 0, -1, -1},
		{3, -1, -1, 0},
		{-1, -1, 3, 2},
		{-1, 2, 1, -1},
		{1, 0, 3, 2},
		{3, 2, 1, 0},
		{2, -1, 0, -1},
		{-1, 3, -1, 1},
	};

	vi nextState = { 1,2,3,0,5,4,7,6 };






	rep(i, N)rep(j, N)cout << ans[i][j];
	cout << endl;
	return 0;
}
