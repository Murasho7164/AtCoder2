#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //207
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b - c * d >= 0) {
        cout << -1 << endl;
    }
    else {
        if (a % (c * d - b) == 0) {
            cout << int(a / (c * d - b)) << endl;
        }
        else
            cout << int(a / (c * d - b)) + 1 << endl;
    }

    return 0;
}
