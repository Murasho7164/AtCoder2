#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //bs
    string s; cin >> s;

    vector<string> e = { "dream","dreamer","erase","eraser" };

    reverse(s.begin(), s.end());
    rep(i, 4) reverse(e[i].begin(),e[i].end());

    int pos = 0;
    bool ok;
    while (pos < s.length()) {
        ok = false;
        rep(i, 4) {
            if (s.substr(pos, e[i].length()) == e[i]) {
                pos += e[i].length();
                ok = true;
            }
        }
        if (!ok) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
