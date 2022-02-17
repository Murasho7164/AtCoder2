#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int MOD = 1000000007;
const double PI = 3.141592653589793;

int main() {
    //“TŒ^90_018
    double t, l, x, y;
    cin >> t >> l >> x >> y;
    int q;
    cin >> q;
    vector<double> e(q);
    rep(i, q) {
        cin >> e[i];
        e[i] = fmod((int)e[i], (int)t);
    }

    rep(i, q) {
        double dy = y + l / 2 * sin(2 * PI * e[i] / t);
        double dz = l / 2 * (1 - cos(2 * PI * e[i] / t));
        double d = sqrt(x * x + dy * dy);

        double ans = atan2(dz, d) * 360 / 2 / PI;

        cout << setprecision(20) << ans << endl;
    }


    return 0;
}
