#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

ll gcd(ll a, ll b) {
    if (a % b == 0)return b;
    return gcd(b, a % b);
}

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    ll ab = gcd(a, b);
    ll n = gcd(ab, c);
    
    ll ans = a / n + b / n + c / n - 3;

    cout << ans << endl;

    return 0;
}
