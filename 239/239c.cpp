#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;
const int mod2 = 998244353;

int main() {
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    vector<P> r1(8), r2(8);

    r1[0].first = x1 + 2;
    r1[0].second = y1 + 1;
    r1[1].first = x1 + 1;
    r1[1].second = y1 + 2;
    r1[2].first = x1 - 1;
    r1[2].second = y1 + 2;
    r1[3].first = x1 - 2;
    r1[3].second = y1 + 1;
    r1[4].first = x1 - 2;
    r1[4].second = y1 - 1;
    r1[5].first = x1 - 1;
    r1[5].second = y1 - 2;
    r1[6].first = x1 + 1;
    r1[6].second = y1 - 2;
    r1[7].first = x1 + 2;
    r1[7].second = y1 - 1;

    r2[0].first = x2 + 2;
    r2[0].second = y2 + 1;
    r2[1].first = x2 + 1;
    r2[1].second = y2 + 2;
    r2[2].first = x2 - 1;
    r2[2].second = y2 + 2;
    r2[3].first = x2 - 2;
    r2[3].second = y2 + 1;
    r2[4].first = x2 - 2;
    r2[4].second = y2 - 1;
    r2[5].first = x2 - 1;
    r2[5].second = y2 - 2;
    r2[6].first = x2 + 1;
    r2[6].second = y2 - 2;
    r2[7].first = x2 + 2;
    r2[7].second = y2 - 1;

    /*rep(i, 8) {
        cout << r1[i].first << " " << r1[i].second << endl;
    }
    cout << endl;
    rep(i, 8) {
        cout << r2[i].first << " " << r2[i].second << endl;
    }*/


    rep(i, 8)rep(j, 8) {
        if (r1[i] == r2[j]) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
