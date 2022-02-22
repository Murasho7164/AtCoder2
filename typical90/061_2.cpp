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
	int q;
	cin >> q;
	vi t(q), x(q);
	rep(i, q) cin >> t[i] >> x[i];

	deque<int> dq;

	rep(i, q) {
		if (t[i] == 1) {
			dq.push_front(x[i]);
		}
		else if (t[i] == 2) {
			dq.push_back(x[i]);
		}
		else {
			cout << dq[x[i] - 1] << endl;
		}
	}

	return 0;
}