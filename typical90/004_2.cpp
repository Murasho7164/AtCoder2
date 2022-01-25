#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //“TŒ^90_004
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w)),b(h, vector<int>(w));
    rep(i, h)rep(j, w) cin >> a[i][j];

    vector<int> hsum(h), wsum(w);
    rep(i, h) {
        int sum = 0;
        rep(j, w) {
            sum += a[i][j];
        }
        hsum[i] = sum;
    }
    cout << endl;
    rep(j, w) {
        int sum = 0;
        rep(i, h) {
            sum += a[i][j];
        }
        wsum[j] = sum;
    }

    rep(i, h){
        rep(j, w) {
            if (j != 0)cout << " ";
            b[i][j] = hsum[i] + wsum[j] - a[i][j];
            cout << b[i][j];
        }
        cout << endl;
    }

    return 0;
}
