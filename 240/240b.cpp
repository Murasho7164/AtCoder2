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
	int a, b;
	cin >> a >> b;

	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}

	if (a == 10 && b == 1) {
		cout << "Yes" << endl;
		return 0;
	}


	if (a - b == 1)cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;
}