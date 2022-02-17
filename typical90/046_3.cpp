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

    vector<int> a(46, 0), b(46, 0), c(46, 0);
    rep(i, n) {
        int x; cin >> x;
        a[x % 46]++;
    }
    rep(i, n) {
        int x; cin >> x;
        b[x % 46]++;
    }
    rep(i, n) {
        int x; cin >> x;
        c[x % 46]++;
    }

    ll cnt = 0;
    rep(i, 46) {
        rep(j, 46) {
            rep(k, 46) {
                if ((i+j+k)%46==0) {
                    cnt += ll(a[i] * b[j] * c[k]);
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
