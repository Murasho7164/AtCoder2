#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;
const int mod2 = 998244353;

int main() {
    ll x;
    cin >> x;

    if (x >= 0)cout << x / 10 << endl;
    else cout << (x + 1) / 10 - 1 << endl;

    return 0;
}
