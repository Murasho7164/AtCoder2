#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;
const int mod2 = 998244353;

int main() {
    //028
    //kaisetsu
    //‚¢‚à‚·–@
    int n;
    cin >> n;
    vector<P> l(n), r(n);
    rep(i, n) cin >> l[i].first >> l[i].second >> r[i].first >> r[i].second;

    vector<vector<int>> k(1002, vector<int>(1002));
    rep(i, 1002) rep(j, 1002) k[i][j] = 0;

    rep(i, n) {
        k[l[i].first][l[i].second]++;
        k[r[i].first][r[i].second]++;
        k[l[i].first][r[i].second]--;
        k[r[i].first][l[i].second]--;
    }
    rep(i, 1001) {
        rep(j, 1000) {
            k[i][j + 1] += k[i][j];
        }
    }
    rep(i, 1000) {
        rep(j, 1001) {
            k[i + 1][j] += k[i][j];
        }
    }

    vector<int> ans(n + 1, 0);
    rep(i, 1001) {
        rep(j, 1001) {
            if(k[i][j]>0) ans[k[i][j]]++;
        }
    }
    rep(i, n) cout << ans[i + 1] << endl;

    return 0;
}
