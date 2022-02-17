#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int MOD = 1000000007;
const double PI = 3.141592653589793;

int main() {
    int n, l;
    cin >> n >> l;

    if (n < l) {
        cout << 1 << endl;
        return 0;
    }


    vector<ll> dp(n + 1);
    rep(i, l) dp[i] = 1;
    For(i, l, n + 1) {
        dp[i] = (dp[i-1]+dp[i-l])%MOD;
    }

    cout << dp[n] << endl;


    return 0;
}
