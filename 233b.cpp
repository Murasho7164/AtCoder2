#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //233
    int l, r;
    cin >> l >> r;
    string s; cin >> s;

    rep(i, l - 1)cout << s[i];

    for (int i = 0; i <= r - l; i++) {
        cout << s[r - i - 1];
    }

    for (int i = r; i < s.length(); i++)cout << s[i];

    return 0;
}