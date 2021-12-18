#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //230
    string s; cin >> s;
    int a = 0;
    string t = "oxxoxxoxxoxxoxxoxx";

    if (s.length() < 3) {
        if (s.length() == 1)cout << "Yes" << endl;
        else if (s[0] == 'o' && s[1] == 'o')cout << "No" << endl;
        else cout << "Yes" << endl;
        return 0;
    }
    rep(i, 4) {
        if (s[i] == 'o') {
            a = i;
            break;
        }
        if (i == 3) {
            cout << "No" << endl;
            return 0;
        }
    }

    rep(i, s.length() - a) {
        if (s[i + a] != t[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}