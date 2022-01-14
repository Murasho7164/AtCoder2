#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //198
    double r, x, y;
    cin >> r >> x >> y;
    double d = sqrt(x * x + y * y);
    int ans = 0;
    if (d < r)ans++;
    while (d > r) {
        ans++;
        d -= r;
    }

    cout << ans+1 << endl;

    return 0;
}