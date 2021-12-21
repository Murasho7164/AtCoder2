#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //135
    ll a, b;
    cin >> a>> b;

    if ((a + b) % 2 == 0) {
        cout << (a + b) / 2 << endl;
    }
    else cout << "IMPOSSIBLE" << endl;

    return 0;
}