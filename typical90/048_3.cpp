#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;
const int mod2 = 998244353;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    rep(i, n)cin >> a[i] >> b[i];

    vector<int> point;
    rep(i, n) {
        point.push_back(b[i]);
        point.push_back(a[i] - b[i]);
    }
    sort(point.rbegin(), point.rend());

    ll ans = 0;

    rep(i,k) {
        ans += point[i];
    }
    cout << ans << endl;

    return 0;
}
