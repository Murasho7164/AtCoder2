#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
#define all(x) (x).begin(),(x).end()
using P = pair<int, int>;
typedef int long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
const int mod = 1000000007;
const int mod2 = 998244353;

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> a(n), b(n);
	rep(i, n)cin >> a[i] >> b[i];

	vector<vector<bool>> dp(n+1, vector<bool>(x+1));

	dp[0][0] = true;
	rep(i, n) {
		rep(j, x + 1) {
			if (dp[i][j]) {
				if (j + a[i] <= x) dp[i + 1][j + a[i]] = true;
				if (j + b[i] <= x) dp[i + 1][j + b[i]] = true;
			}
		}
	}

	if (dp[n][x])cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;
}