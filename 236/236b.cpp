#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //236
    int n;
    cin >> n;
    vector<int> a(4 * n - 1), b(n + 1);
    rep(i, 4 * n - 1) cin >> a[i];

    rep(i, 4 * n - 1) {
        b[a[i]]++;
    }
    rep(i, n) {
        if (b[i + 1] != 4) {
            cout << i + 1 << endl;
        }
    }
    
    return 0;
}
