#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //“TŒ^90_014
    ll n;
    cin >> n;
    ll a, b, c;
    cin >> a >> b >> c;

    int L = 10000;
    ll ans = mod;
    rep(i, L) {
        rep(j, L-i) {
            if(((n - a * i - b * j) % c==0)&&(n - a * i - b * j) / c>=0)
                ans = min(ans, i + j + (n - a * i - b * j) / c);
        }
    }

    cout << ans << endl;

    return 0;
}
