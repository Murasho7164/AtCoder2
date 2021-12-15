#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //199
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int ans = 0;

    rep(i, n) {
        cin >> a.at(i);
    }
    rep(i, n) {
        cin >> b.at(i);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (b.at(0) >= a.at(n - 1)) {
        ans = b.at(0) - a.at(n - 1) + 1;
    }

    cout << ans << endl;

    return 0;
}