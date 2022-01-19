#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //166
    int n, m;
    cin >> n >> m;
    vector<int>h(n);
    rep(i, n)cin >> h[i];
    vector<P> ab(m);
    rep(i, m) cin >> ab[i].first >> ab[i].second;

    vector<bool> good(n,true);

    rep(i, m) {
        if (h[ab[i].first - 1] > h[ab[i].second - 1]) good[ab[i].second - 1] = false;
        else if(h[ab[i].first - 1] < h[ab[i].second - 1])good[ab[i].first - 1] = false;
        else {
            good[ab[i].first - 1] = false;
            good[ab[i].second - 1] = false;
        }
    }

    int count = 0;
    rep(i, n) {
        if (good[i])count++;
    }

    cout << count << endl;

    return 0;
}
