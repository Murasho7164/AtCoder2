#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //57
    int n, m;
    cin >> n >> m;
    vector<P> ab(n), cd(m);
    rep(i, n)cin >> ab[i].first >> ab[i].second;
    rep(i, m)cin >> cd[i].first >> cd[i].second;
    rep(i, n) {
        int pos = 0;
        rep(j, m) {
            int di = abs(ab[i].first - cd[j].first) + abs(ab[i].second - cd[j].second);
            int dm = abs(ab[i].first - cd[pos].first) + abs(ab[i].second - cd[pos].second);
            if (di < dm)pos = j;
        }
        cout << pos + 1 << endl;
    }



    return 0;
}