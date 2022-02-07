#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;
const int mod2 = 998244353;

int main() {
    //032
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    rep(i, n)rep(j, n) cin >> a[i][j];
    int m;
    cin >> m;
    vector<int> x(m), y(m);
    rep(i, m) cin >> x[i] >> y[i];

    vector<vector<bool>> b(n, vector<bool>(n));
    rep(i, n)rep(j, n) b[i][j] = false;
    rep(i, m) {
        b[x[i] - 1][y[i] - 1] = true;
        b[y[i] - 1][x[i] - 1] = true;
    }

    vector<int> p(n,0);
    rep(i, n) p[i] = i;
    int ans = 1000000;

    do {
        bool flag = false;
        int sum = 0;
        rep(i, n - 1) {
            if (b[p[i]][p[i + 1]]) flag = true;
        }
        rep(i, n) {
            sum += a[p[i]][i];
        }
        if (!flag) ans = min(ans, sum);

    } while (next_permutation(p.begin(),p.end()));

    if (ans == 1000000)ans = -1;

    cout << ans << endl;

    return 0;
}
