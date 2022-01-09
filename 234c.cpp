#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //234
    ll k; cin >> k;
    string ans = "\0";

    while (k > 0) {
        if (k % 2 == 1) ans = "2" + ans;
        else ans = "0" + ans;
        k /= 2;
    }
    cout << ans << endl;

    return 0;
}