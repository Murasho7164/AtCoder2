#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;
const int mod2 = 998244353;

int main() {
    int k;
    cin >> k;

    if (k % 9 != 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<ll> dp(k+1);

    rep(i, 10)dp[i] = pow(2, i - 1);

    rep(i, k - 9) {
        dp[i + 10] = dp[i + 9] + dp[i + 8] + dp[i + 7] + dp[i + 6] + dp[i + 5] + dp[i + 4] + dp[i + 3] + dp[i + 2] + dp[i + 1];
        if (dp[i + 10] > mod)dp[i + 10] %= mod;
    }

    cout << dp[k] << endl;

    return 0;
}
