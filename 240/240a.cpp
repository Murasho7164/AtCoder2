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
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	set<int> st;
	rep(i, n) {
		st.insert(a[i]);
	}

	cout << st.size() << endl;


	return 0;
}