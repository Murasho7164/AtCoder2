#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;
const int INF = 100000000;

int main() {
    //203
    ll n, k;
    cin >> n >> k;
    vector<pair<ll,ll>> a(n);
    rep(i, n) cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end());

    int pos = 0;
    while (k >= a[pos].first) {
        k += a[pos].second;
        if (pos < n - 1)pos++;
        else {
            //k += a[pos].second;
            break;
        }
    }

    cout << k << endl;

    return 0;
}