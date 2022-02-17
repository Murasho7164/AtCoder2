#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;
const int mod2 = 998244353;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<int> t(q), x(q), y(q);
    rep(i, q) cin >> t[i] >> x[i] >> y[i];
    
    int pos = 0;
    
    rep(i, q) {
        if (t[i] == 1) {
            int tmp = a[(x[i] - pos - 1+n) % n];
            a[(x[i] - pos - 1 + n) % n] = a[(y[i] - pos - 1 + n) % n];
            a[(y[i] - pos - 1 + n) % n] = tmp;
        }
        else if (t[i] == 2) {
            pos++;
            pos %= n;
        }
        else {
            cout << a[(x[i] - pos - 1 + n) % n] << endl;
        }

        /*rep(j, n) {
            cout << a[j] << " ";
        }
        cout << endl;*/
    }

    return 0;
}
