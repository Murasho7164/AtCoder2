#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //“TŒ^90_014
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());


    ll ans = 0;
    rep(i, n) {
        ans += abs(a[i] - b[i]);
    }
    cout << ans << endl;

    return 0;
}
