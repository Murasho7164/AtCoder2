#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;


int main() {
    //“TŒ^90_010
    //‰ðà
    int n;
    cin >> n;
    vector<P> cp(n);
    rep(i, n) cin >> cp[i].first >> cp[i].second;
    int q;
    cin >> q;
    vector<P> lr(q);
    rep(i,q) cin >> lr[i].first >> lr[i].second;

    vector<int> sum1(n,0),sum2(n,0);
    For(i,0, n) {
        if (i > 0) {
            sum1[i] += sum1[i - 1];
            sum2[i] += sum2[i - 1];
        }

        if (cp[i].first == 1) sum1[i] += cp[i].second;
        else sum2[i] += cp[i].second;
    }
    rep(i, q) {
        if (lr[i].first >= 2) {
            cout << sum1[lr[i].second - 1] - sum1[lr[i].first - 2] << " " << sum2[lr[i].second - 1] - sum2[lr[i].first - 2] << endl;
        }
        else {
            cout << sum1[lr[i].second - 1] << " " << sum2[lr[i].second - 1] << endl;
        }
    }

    return 0;
}
