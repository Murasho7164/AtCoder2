#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //174
    int k;
    cin >> k;
    int ans = -1;

    ll n = 7;
    for (int i = 1; i <= k; i++) {
        if (n % k == 0) {
            ans = i;
            break;
        }
        n = 10 * (n % k) +7;
    }

    cout << ans << endl;

    return 0;
}