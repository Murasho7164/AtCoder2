#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //57
    ll n;
    cin >> n;
    ll a = 1;

    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % (i + (ll)1) == 0) a = i + 1;
    }

    a = n / a;

    int ans = 0;
    while (a != 0) {
        ans++;
        a /= 10;
    }

    cout << ans << endl;

    return 0;
}