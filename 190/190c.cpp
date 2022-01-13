#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
#define INF 1010000000
using ll = long long;
using P = pair<int, int>;

int main() {
    //190
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i, m) cin >> a[i] >> b[i];
    int k; cin >> k;
    vector<int> c(k),d(k);
    rep(i, k) cin >> c[i] >> d[i];
    
    vector<bool> ball(n+1);
    int ans=0;

    rep(i, (1 << k)) {
        int count = 0;
        rep(q, n + 1)ball[q] = false;

        rep(j, k) {
            if (i & (1 << j))ball[c[j]] = true;
            else ball[d[j]] = true;
        }
        rep (num, m) {
            if (ball[a[num]] && ball[b[num]]) count++;
        }
        ans = max(ans, count);
    }
    cout << ans << endl;

    return 0;
}