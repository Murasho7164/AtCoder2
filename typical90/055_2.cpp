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
    int n, p, q;
    cin >> n >> p >> q;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int ans = 0;

    For(i, 0, n) {
        For(j, i+1 ,n) {
            For(k, j+1, n) {
                For(l,k+1, n) {
                    For(m, l+1, n) {
                        if (ll(a[i] % p) * a[j] % p * a[k] % p* a[l] % p * a[m] % p % p == q)ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}
