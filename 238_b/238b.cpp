#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;
const int mod2 = 998244353;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<int> b(n + 1);
    b[0] = 0;
    rep(i, n) {
        b[i + 1] = (b[i] + a[i]) % 360;
    }

    sort(b.begin(), b.end());

    int ans = 0;
    rep(i, n) {
        ans = max(ans, b[i + 1] - b[i]);
    }
    ans = max(ans, 360 - b[b.size() - 1]);

    cout << ans << endl;

    return 0;
}
