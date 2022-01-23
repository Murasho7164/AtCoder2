#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //236
    int n, m;
    cin >> n >> m;
    vector<string> s(n), t(m);
    rep(i, n)cin >> s[i];
    rep(i, m)cin >> t[i];

    int tpos = 0;
    rep(i, n) {
        if (s[i] == t[tpos] && tpos < t.size()) {
            cout << "Yes" << endl;
            tpos++;
        }
        else cout << "No" << endl;
    }

    return 0;
}
