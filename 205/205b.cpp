#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //205
    int n; cin >> n;
    vector<int> a(n);
    rep(i, n)cin >> a[i];
    bool ok=true;

    sort(a.begin(), a.end());
    if (a[0] != 1) ok = false;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1] + 1) ok=false;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
