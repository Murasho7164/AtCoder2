#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //234
    int n; cin >> n;
    vector<int> x(n), y(n);
    rep(i, n)cin >> x[i] >> y[i];
    double ans = 0;


    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            ans = max(ans, sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j])));
        }
    }

    cout << setprecision(10) << ans << endl;

    return 0;
}