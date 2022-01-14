#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
#define INF 1010000000
using ll = long long;
using P = pair<int, int>;

int main() {
    //208
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), tmp(n);
    rep(i, n) {
        cin >> a[i];
        tmp[i] = a[i];
    }

    ll r = k % n;
    vector<bool> b(n);

    if (r == 0) {
        rep(i, n) {
            cout << k / n << endl;
        }
        return 0;
    }
    else {
        sort(tmp.begin(), tmp.end());
        rep(i, n) {
            if (a[i] <= tmp[r - 1])b[i] = true;
            else b[i] = false;
        }
    }

    rep(i, n) {
        if (b[i])cout << k / n + 1 << endl;
        else cout << k / n << endl;
    }

    return 0;
}