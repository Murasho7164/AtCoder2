#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //217
    int n; cin >> n;
    vector<int> p(n), q(n);
    rep(i, n) cin >> p[i];

    rep(i, n) {
        q[p[i]-1] = i + 1;
    }

    rep(i, n) cout << q[i] << " ";

    return 0;
}