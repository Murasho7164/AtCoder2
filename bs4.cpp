#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //bs
    int n; cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    rep(i, 100) {
        rep(j, n) {
            if (a[j] % 2 == 0) {
                a[j] /= 2;
            }
            else {
                cout << i << endl;
                return 0;
            }
        }
    }


    return 0;
}