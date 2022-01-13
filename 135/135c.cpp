#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //135
    int n; cin >> n;
    vector<ll> a(n + 1), b(n);
    rep(i, n + 1) cin >> a[i];
    rep(i, n)cin >> b[i];
    ll sum = 0;

    rep(i, n) {
        sum += min(a[i] + a[i + 1], b[i]);
        if (a[i] + a[i + 1] <= b[i]) a[i + 1] = 0;
        else if (a[i] < b[i])a[i + 1] -= (b[i] - a[i]);
        else continue;
    }

    cout << sum << endl;

    return 0;
}