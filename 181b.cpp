#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //181
    int n; cin >> n;
    vector<ll> a(n), b(n);
    ll sum = 0;
    rep(i, n) {
        cin >> a.at(i) >> b.at(i);
        sum += (a.at(i) + b.at(i)) * (1 - a.at(i) + b.at(i)) / 2;
    }

    cout << sum << endl;

    return 0;
}