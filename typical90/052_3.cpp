#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
#define all(x) (x).begin(),(x).end()
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;
const int mod2 = 998244353;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(6));
    rep(i, n)rep(j, 6) cin >> a[i][j];
    
    vector<int> sumL(n, 0);
    ll ans = 1;
    rep(i, n)rep(j, 6) {
        sumL[i] += a[i][j];
    }

    rep(i, n) {
        ans *= (sumL[i] % mod);
        ans %= mod;
    }

    cout << ans << endl;

    return 0;
}
