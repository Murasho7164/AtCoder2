#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //194
    int n; cin >> n;
    vector<int> a(n), b(n);
    rep(i, n)cin >> a[i] >> b[i];
    
    int mina = 0, minb = 0;

    for (int i = 1; i < n;i++) {
        if (a[mina] > a[i])mina = i;
        else if (b[minb] > b[i])minb = i;
    }

    int ans = min(max(a[mina], b[minb]), a[mina] + b[mina]);

    cout << ans << endl;

    return 0;
}