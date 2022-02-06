#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;
const int mod2 = 998244353;

int main() {
    //027
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    map<string, bool> mp;

    rep(i, n) {
        if (!mp[s[i]]) {
            cout << i + 1 << endl;
            mp[s[i]] = true;
        }
    }

    return 0;
}
