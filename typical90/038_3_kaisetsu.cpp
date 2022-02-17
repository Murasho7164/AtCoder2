#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;
const int mod2 = 998244353;

ll gcd(ll a, ll b) {
    if (b == 0)return a;
    return gcd(b, a % b);
}


int main() {
    //038
    ll a, b;
    cin >> a >> b;
    ll tmp = max(a, b) / gcd(a, b);
    ll ans = min(a, b) * tmp;
    ll LARGE = 1000000000000000000;


    if (tmp > LARGE/min(a,b))cout << "Large" << endl;
    else cout << ans << endl;

    return 0;
}
