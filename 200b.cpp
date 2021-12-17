#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //200
    ll n, k; cin >> n >> k;
    rep(i, k) {
        if (n % 200 == 0)
            n /= 200;
        else
            n = 1000 * n + 200;
    }
    cout<<n<<endl;

    return 0;
}
