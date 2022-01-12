#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
#define INF 1010000000
using ll = long long;
using P = pair<int, int>;

int main() {
    //190
    int n, s, d;
    cin >> n >> s >> d;
    vector<int> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];

    rep(i, n) {
        if (s > x[i] && d < y[i]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}