#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //bs
    int n; cin >> n;
    vector<int> t(n), x(n), y(n);
    rep(i, n) cin >> t[i] >> x[i] >> y[i];

    P pos = { 0,0 };
    int d = 0;
    int time = 0;
    bool ok = true;

    rep(i, n) {
        d = abs(x[i] - pos.first) + abs(y[i] - pos.second);
        if (d > t[i] - time) {
            ok = false;
            break;
        }
        else if ((t[i] - time - d) % 2 == 0) {
            pos.first = x[i];
            pos.second = y[i];
            time = t[i];
        }
        else {
            ok = false;
            break;
        }
    }

    if (ok) cout << "Yes" << endl;
    else    cout << "No" << endl;

    return 0;
}
