#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //bs
    ll n, y; cin >> n >> y;

    rep(i, n + 1) {
        rep(j, n + 1 - i) {
            if (i * 9 + j * 4 + n == y / 1000) {
                cout << i << " " << j << " " << n - i - j << endl;
                return 0;
            }
        }
    }

    cout << "-1 -1 -1" << endl;

    return 0;
}
