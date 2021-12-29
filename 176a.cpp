#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //176
    int n, x, t;
    cin >> n >> x >> t;
    int ans = 0;
    while (n > 0) {
        n -= x;
        ans += t;
    }
    cout << ans << endl;
    return 0;
}