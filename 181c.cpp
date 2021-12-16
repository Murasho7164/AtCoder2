#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //181
    int n; cin >> n;
    vector<int> x(n),y(n);
    rep(i, n) cin >> x.at(i)>>y.at(i);

    rep(i, n-2) {
        For(j, i + 1, n - 1) {
            For(k, j + 1, n) {
                if ((y.at(i) - y.at(j)) * (x.at(j) - x.at(k)) == (y.at(j) - y.at(k)) * (x.at(i) - x.at(j))) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;

    return 0;
}
