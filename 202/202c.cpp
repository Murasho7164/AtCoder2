#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
#define INF 1010000000
using ll = long long;
using P = pair<int, int>;

int main() {
    //202
    int n; cin >> n;
    vector<int> a(n), b(n), c(n);
    rep(i, n)cin >> a[i];
    rep(i, n)cin >> b[i];
    rep(i, n) {
        cin >> c[i];
        c[i]--;
    }

    vector<int> num(n);
    rep(i, n) {
        num[b[c[i]]]++;
    }

    ll ans = 0;
    rep(i, n)  {
        ans += num[a[i]];
    }

    cout << ans << endl;

    return 0;
}