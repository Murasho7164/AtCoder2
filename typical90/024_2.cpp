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
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    rep(i, n)cin >> a[i];
    rep(i, n)cin >> b[i];

    ll cnt = 0;
    rep(i, n) {
        cnt += abs(a[i] - b[i]);
    }

    if (k < cnt) {
        cout << "No!!" << endl;
    }
    else {
        if ((k - cnt) % 2 == 0)cout << "Yes" << endl;
        else cout << "No" << endl;
    }


    return 0;
}
