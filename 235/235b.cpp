#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;
const int INF = 100000000;

int main() {
    //235
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<P> xk(q);
    rep(i, n)cin >> a[i];
    rep(i, q)cin >> xk[i].first >> xk[i].second;

    map<int, vector<int>> map;
    rep(i, n)map[a[i]].push_back(i + 1);

    rep(i, q) {
        int ans = 0;
        if (map[xk[i].first].size() < xk[i].second) {
            cout << -1 << endl;
        }
        else {
            cout << map[xk[i].first][xk[i].second - 1] << endl;
        }
    }

    return 0;
}