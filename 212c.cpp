#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
#define INF 1010000000
using ll = long long;
using P = pair<int, int>;

int main() {
    //212
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i, n)cin >> a[i];
    rep(i, m)cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = INF;
    int i = 0, j = 0;

    while (i < n && j < m) {
        ans = min(ans, abs(a[i] - b[j]));
        if (a[i] > b[j])j++;
        else i++;
    }
    cout << ans << endl;

    return 0;
}