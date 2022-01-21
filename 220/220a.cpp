#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //220
    int a, b, c;
    cin >> a >> b >> c;

    int ans = -1;
    For(i, a, b + 1) {
        if (i % c == 0)ans = i;
    }
    cout << ans << endl;
    return 0;
}
