#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //bs
    int n;cin >> n;
    vector<int> a(n);
    rep(i, n) {
        cin >> a[i];
    }
    int ans = 0;

    sort(a.rbegin(), a.rend());
    rep(i, n) {
        if (i % 2 == 0) ans += a[i];
        else ans -= a[i];
    }

    cout << ans << endl;

    return 0;
}