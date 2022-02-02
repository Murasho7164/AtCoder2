#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    ll bc = 1;
    rep(i, b)bc *= c;

    if (a < bc)cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
