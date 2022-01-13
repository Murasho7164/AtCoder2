#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
#define INF 1010000000
using ll = long long;
using P = pair<int, int>;

int main() {
    //128
    int n, m;
    cin >> n >> m;
    vector<int> k(m);
    vector<vector<int>> s(m, vector<int>(n));
    rep(i, m) {
        cin >> k[i];
        rep(j, k[i]) cin >> s[i][j];
    }
    vector<int> p(m);
    rep(i, m)cin >> p[i];

    int ans = 0;
 
    for (int bit = 0; bit < (1 << n); bit++) {
        int res = 0;
        
        rep(i, m) {
            int sum = 0;
            rep(j, k[i]) {
                if(bit&1<<j) sum++;
            }
            if (sum % 2 == p[i])res++;
        }
        if (res == m)ans++;
    }

    cout << ans << endl;

    return 0;
}